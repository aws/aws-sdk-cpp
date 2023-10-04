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
    AWS_DATAZONE_API ListingRevision();
    AWS_DATAZONE_API ListingRevision(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API ListingRevision& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An identifier of a revision of an asset published in a Amazon DataZone
     * catalog.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>An identifier of a revision of an asset published in a Amazon DataZone
     * catalog.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>An identifier of a revision of an asset published in a Amazon DataZone
     * catalog.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>An identifier of a revision of an asset published in a Amazon DataZone
     * catalog.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>An identifier of a revision of an asset published in a Amazon DataZone
     * catalog.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>An identifier of a revision of an asset published in a Amazon DataZone
     * catalog.</p>
     */
    inline ListingRevision& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>An identifier of a revision of an asset published in a Amazon DataZone
     * catalog.</p>
     */
    inline ListingRevision& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>An identifier of a revision of an asset published in a Amazon DataZone
     * catalog.</p>
     */
    inline ListingRevision& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The details of a revision of an asset published in a Amazon DataZone
     * catalog.</p>
     */
    inline const Aws::String& GetRevision() const{ return m_revision; }

    /**
     * <p>The details of a revision of an asset published in a Amazon DataZone
     * catalog.</p>
     */
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }

    /**
     * <p>The details of a revision of an asset published in a Amazon DataZone
     * catalog.</p>
     */
    inline void SetRevision(const Aws::String& value) { m_revisionHasBeenSet = true; m_revision = value; }

    /**
     * <p>The details of a revision of an asset published in a Amazon DataZone
     * catalog.</p>
     */
    inline void SetRevision(Aws::String&& value) { m_revisionHasBeenSet = true; m_revision = std::move(value); }

    /**
     * <p>The details of a revision of an asset published in a Amazon DataZone
     * catalog.</p>
     */
    inline void SetRevision(const char* value) { m_revisionHasBeenSet = true; m_revision.assign(value); }

    /**
     * <p>The details of a revision of an asset published in a Amazon DataZone
     * catalog.</p>
     */
    inline ListingRevision& WithRevision(const Aws::String& value) { SetRevision(value); return *this;}

    /**
     * <p>The details of a revision of an asset published in a Amazon DataZone
     * catalog.</p>
     */
    inline ListingRevision& WithRevision(Aws::String&& value) { SetRevision(std::move(value)); return *this;}

    /**
     * <p>The details of a revision of an asset published in a Amazon DataZone
     * catalog.</p>
     */
    inline ListingRevision& WithRevision(const char* value) { SetRevision(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_revision;
    bool m_revisionHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
