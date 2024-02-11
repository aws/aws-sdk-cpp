/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace DataZone
{
namespace Model
{

  /**
   */
  class GetFormTypeRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API GetFormTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFormType"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;

    AWS_DATAZONE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of the Amazon DataZone domain in which this metadata form type
     * exists.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }

    /**
     * <p>The ID of the Amazon DataZone domain in which this metadata form type
     * exists.</p>
     */
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }

    /**
     * <p>The ID of the Amazon DataZone domain in which this metadata form type
     * exists.</p>
     */
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }

    /**
     * <p>The ID of the Amazon DataZone domain in which this metadata form type
     * exists.</p>
     */
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which this metadata form type
     * exists.</p>
     */
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which this metadata form type
     * exists.</p>
     */
    inline GetFormTypeRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which this metadata form type
     * exists.</p>
     */
    inline GetFormTypeRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which this metadata form type
     * exists.</p>
     */
    inline GetFormTypeRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}


    /**
     * <p>The ID of the metadata form type.</p>
     */
    inline const Aws::String& GetFormTypeIdentifier() const{ return m_formTypeIdentifier; }

    /**
     * <p>The ID of the metadata form type.</p>
     */
    inline bool FormTypeIdentifierHasBeenSet() const { return m_formTypeIdentifierHasBeenSet; }

    /**
     * <p>The ID of the metadata form type.</p>
     */
    inline void SetFormTypeIdentifier(const Aws::String& value) { m_formTypeIdentifierHasBeenSet = true; m_formTypeIdentifier = value; }

    /**
     * <p>The ID of the metadata form type.</p>
     */
    inline void SetFormTypeIdentifier(Aws::String&& value) { m_formTypeIdentifierHasBeenSet = true; m_formTypeIdentifier = std::move(value); }

    /**
     * <p>The ID of the metadata form type.</p>
     */
    inline void SetFormTypeIdentifier(const char* value) { m_formTypeIdentifierHasBeenSet = true; m_formTypeIdentifier.assign(value); }

    /**
     * <p>The ID of the metadata form type.</p>
     */
    inline GetFormTypeRequest& WithFormTypeIdentifier(const Aws::String& value) { SetFormTypeIdentifier(value); return *this;}

    /**
     * <p>The ID of the metadata form type.</p>
     */
    inline GetFormTypeRequest& WithFormTypeIdentifier(Aws::String&& value) { SetFormTypeIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the metadata form type.</p>
     */
    inline GetFormTypeRequest& WithFormTypeIdentifier(const char* value) { SetFormTypeIdentifier(value); return *this;}


    /**
     * <p>The revision of this metadata form type.</p>
     */
    inline const Aws::String& GetRevision() const{ return m_revision; }

    /**
     * <p>The revision of this metadata form type.</p>
     */
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }

    /**
     * <p>The revision of this metadata form type.</p>
     */
    inline void SetRevision(const Aws::String& value) { m_revisionHasBeenSet = true; m_revision = value; }

    /**
     * <p>The revision of this metadata form type.</p>
     */
    inline void SetRevision(Aws::String&& value) { m_revisionHasBeenSet = true; m_revision = std::move(value); }

    /**
     * <p>The revision of this metadata form type.</p>
     */
    inline void SetRevision(const char* value) { m_revisionHasBeenSet = true; m_revision.assign(value); }

    /**
     * <p>The revision of this metadata form type.</p>
     */
    inline GetFormTypeRequest& WithRevision(const Aws::String& value) { SetRevision(value); return *this;}

    /**
     * <p>The revision of this metadata form type.</p>
     */
    inline GetFormTypeRequest& WithRevision(Aws::String&& value) { SetRevision(std::move(value)); return *this;}

    /**
     * <p>The revision of this metadata form type.</p>
     */
    inline GetFormTypeRequest& WithRevision(const char* value) { SetRevision(value); return *this;}

  private:

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_formTypeIdentifier;
    bool m_formTypeIdentifierHasBeenSet = false;

    Aws::String m_revision;
    bool m_revisionHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
