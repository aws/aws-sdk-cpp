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
   * <p>A revision to be made to an asset published in a Amazon DataZone
   * catalog.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ListingRevisionInput">AWS
   * API Reference</a></p>
   */
  class ListingRevisionInput
  {
  public:
    AWS_DATAZONE_API ListingRevisionInput();
    AWS_DATAZONE_API ListingRevisionInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API ListingRevisionInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An identifier of revision to be made to an asset published in a Amazon
     * DataZone catalog.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>An identifier of revision to be made to an asset published in a Amazon
     * DataZone catalog.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>An identifier of revision to be made to an asset published in a Amazon
     * DataZone catalog.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>An identifier of revision to be made to an asset published in a Amazon
     * DataZone catalog.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>An identifier of revision to be made to an asset published in a Amazon
     * DataZone catalog.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>An identifier of revision to be made to an asset published in a Amazon
     * DataZone catalog.</p>
     */
    inline ListingRevisionInput& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>An identifier of revision to be made to an asset published in a Amazon
     * DataZone catalog.</p>
     */
    inline ListingRevisionInput& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>An identifier of revision to be made to an asset published in a Amazon
     * DataZone catalog.</p>
     */
    inline ListingRevisionInput& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>The details of a revision to be made to an asset published in a Amazon
     * DataZone catalog.</p>
     */
    inline const Aws::String& GetRevision() const{ return m_revision; }

    /**
     * <p>The details of a revision to be made to an asset published in a Amazon
     * DataZone catalog.</p>
     */
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }

    /**
     * <p>The details of a revision to be made to an asset published in a Amazon
     * DataZone catalog.</p>
     */
    inline void SetRevision(const Aws::String& value) { m_revisionHasBeenSet = true; m_revision = value; }

    /**
     * <p>The details of a revision to be made to an asset published in a Amazon
     * DataZone catalog.</p>
     */
    inline void SetRevision(Aws::String&& value) { m_revisionHasBeenSet = true; m_revision = std::move(value); }

    /**
     * <p>The details of a revision to be made to an asset published in a Amazon
     * DataZone catalog.</p>
     */
    inline void SetRevision(const char* value) { m_revisionHasBeenSet = true; m_revision.assign(value); }

    /**
     * <p>The details of a revision to be made to an asset published in a Amazon
     * DataZone catalog.</p>
     */
    inline ListingRevisionInput& WithRevision(const Aws::String& value) { SetRevision(value); return *this;}

    /**
     * <p>The details of a revision to be made to an asset published in a Amazon
     * DataZone catalog.</p>
     */
    inline ListingRevisionInput& WithRevision(Aws::String&& value) { SetRevision(std::move(value)); return *this;}

    /**
     * <p>The details of a revision to be made to an asset published in a Amazon
     * DataZone catalog.</p>
     */
    inline ListingRevisionInput& WithRevision(const char* value) { SetRevision(value); return *this;}

  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_revision;
    bool m_revisionHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
