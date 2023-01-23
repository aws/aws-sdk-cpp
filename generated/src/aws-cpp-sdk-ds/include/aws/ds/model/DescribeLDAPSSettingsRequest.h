/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/LDAPSType.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   */
  class DescribeLDAPSSettingsRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API DescribeLDAPSSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeLDAPSSettings"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the directory.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The identifier of the directory.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The identifier of the directory.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The identifier of the directory.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The identifier of the directory.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The identifier of the directory.</p>
     */
    inline DescribeLDAPSSettingsRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier of the directory.</p>
     */
    inline DescribeLDAPSSettingsRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the directory.</p>
     */
    inline DescribeLDAPSSettingsRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>The type of LDAP security to enable. Currently only the value
     * <code>Client</code> is supported.</p>
     */
    inline const LDAPSType& GetType() const{ return m_type; }

    /**
     * <p>The type of LDAP security to enable. Currently only the value
     * <code>Client</code> is supported.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of LDAP security to enable. Currently only the value
     * <code>Client</code> is supported.</p>
     */
    inline void SetType(const LDAPSType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of LDAP security to enable. Currently only the value
     * <code>Client</code> is supported.</p>
     */
    inline void SetType(LDAPSType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of LDAP security to enable. Currently only the value
     * <code>Client</code> is supported.</p>
     */
    inline DescribeLDAPSSettingsRequest& WithType(const LDAPSType& value) { SetType(value); return *this;}

    /**
     * <p>The type of LDAP security to enable. Currently only the value
     * <code>Client</code> is supported.</p>
     */
    inline DescribeLDAPSSettingsRequest& WithType(LDAPSType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The type of next token used for pagination.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The type of next token used for pagination.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The type of next token used for pagination.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The type of next token used for pagination.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The type of next token used for pagination.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The type of next token used for pagination.</p>
     */
    inline DescribeLDAPSSettingsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The type of next token used for pagination.</p>
     */
    inline DescribeLDAPSSettingsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The type of next token used for pagination.</p>
     */
    inline DescribeLDAPSSettingsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Specifies the number of items that should be displayed on one page.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>Specifies the number of items that should be displayed on one page.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>Specifies the number of items that should be displayed on one page.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>Specifies the number of items that should be displayed on one page.</p>
     */
    inline DescribeLDAPSSettingsRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    LDAPSType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
