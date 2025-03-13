/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DataZone
{
namespace Model
{

  /**
   * <p>A revision of an asset published in a Amazon DataZone catalog.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ListingRevision">AWS
   * API Reference</a></p>
   */
  class ListingRevision
  {
  public:
    AWS_DATAZONE_API ListingRevision() = default;
    AWS_DATAZONE_API ListingRevision(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API ListingRevision& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An identifier of a revision of an asset published in a Amazon DataZone
     * catalog.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ListingRevision& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of a revision of an asset published in a Amazon DataZone
     * catalog.</p>
     */
    inline const Aws::String& GetRevision() const { return m_revision; }
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
    template<typename RevisionT = Aws::String>
    void SetRevision(RevisionT&& value) { m_revisionHasBeenSet = true; m_revision = std::forward<RevisionT>(value); }
    template<typename RevisionT = Aws::String>
    ListingRevision& WithRevision(RevisionT&& value) { SetRevision(std::forward<RevisionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_revision;
    bool m_revisionHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
