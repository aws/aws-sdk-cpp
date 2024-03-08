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
  class DeleteProjectRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API DeleteProjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteProject"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;

    AWS_DATAZONE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of the Amazon DataZone domain in which the project is deleted.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }

    /**
     * <p>The ID of the Amazon DataZone domain in which the project is deleted.</p>
     */
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }

    /**
     * <p>The ID of the Amazon DataZone domain in which the project is deleted.</p>
     */
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }

    /**
     * <p>The ID of the Amazon DataZone domain in which the project is deleted.</p>
     */
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which the project is deleted.</p>
     */
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which the project is deleted.</p>
     */
    inline DeleteProjectRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which the project is deleted.</p>
     */
    inline DeleteProjectRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which the project is deleted.</p>
     */
    inline DeleteProjectRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}


    /**
     * <p>The identifier of the project that is to be deleted.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The identifier of the project that is to be deleted.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The identifier of the project that is to be deleted.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The identifier of the project that is to be deleted.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The identifier of the project that is to be deleted.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The identifier of the project that is to be deleted.</p>
     */
    inline DeleteProjectRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The identifier of the project that is to be deleted.</p>
     */
    inline DeleteProjectRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the project that is to be deleted.</p>
     */
    inline DeleteProjectRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>Optional flag to asynchronously delete child entities within the project</p>
     */
    inline bool GetSkipDeletionCheck() const{ return m_skipDeletionCheck; }

    /**
     * <p>Optional flag to asynchronously delete child entities within the project</p>
     */
    inline bool SkipDeletionCheckHasBeenSet() const { return m_skipDeletionCheckHasBeenSet; }

    /**
     * <p>Optional flag to asynchronously delete child entities within the project</p>
     */
    inline void SetSkipDeletionCheck(bool value) { m_skipDeletionCheckHasBeenSet = true; m_skipDeletionCheck = value; }

    /**
     * <p>Optional flag to asynchronously delete child entities within the project</p>
     */
    inline DeleteProjectRequest& WithSkipDeletionCheck(bool value) { SetSkipDeletionCheck(value); return *this;}

  private:

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    bool m_skipDeletionCheck;
    bool m_skipDeletionCheckHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
