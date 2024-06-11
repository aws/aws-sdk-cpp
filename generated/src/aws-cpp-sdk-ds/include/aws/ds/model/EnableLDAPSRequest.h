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
  class EnableLDAPSRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API EnableLDAPSRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableLDAPS"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the directory.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }
    inline EnableLDAPSRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}
    inline EnableLDAPSRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}
    inline EnableLDAPSRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of LDAP security to enable. Currently only the value
     * <code>Client</code> is supported.</p>
     */
    inline const LDAPSType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const LDAPSType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(LDAPSType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline EnableLDAPSRequest& WithType(const LDAPSType& value) { SetType(value); return *this;}
    inline EnableLDAPSRequest& WithType(LDAPSType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    LDAPSType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
