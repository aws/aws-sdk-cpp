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
   * <p>The location of a project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AwsLocation">AWS
   * API Reference</a></p>
   */
  class AwsLocation
  {
  public:
    AWS_DATAZONE_API AwsLocation();
    AWS_DATAZONE_API AwsLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API AwsLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The access role of a connection.</p>
     */
    inline const Aws::String& GetAccessRole() const{ return m_accessRole; }
    inline bool AccessRoleHasBeenSet() const { return m_accessRoleHasBeenSet; }
    inline void SetAccessRole(const Aws::String& value) { m_accessRoleHasBeenSet = true; m_accessRole = value; }
    inline void SetAccessRole(Aws::String&& value) { m_accessRoleHasBeenSet = true; m_accessRole = std::move(value); }
    inline void SetAccessRole(const char* value) { m_accessRoleHasBeenSet = true; m_accessRole.assign(value); }
    inline AwsLocation& WithAccessRole(const Aws::String& value) { SetAccessRole(value); return *this;}
    inline AwsLocation& WithAccessRole(Aws::String&& value) { SetAccessRole(std::move(value)); return *this;}
    inline AwsLocation& WithAccessRole(const char* value) { SetAccessRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID of a connection.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline AwsLocation& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline AwsLocation& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline AwsLocation& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region of a connection.</p>
     */
    inline const Aws::String& GetAwsRegion() const{ return m_awsRegion; }
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }
    inline void SetAwsRegion(const Aws::String& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }
    inline void SetAwsRegion(Aws::String&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }
    inline void SetAwsRegion(const char* value) { m_awsRegionHasBeenSet = true; m_awsRegion.assign(value); }
    inline AwsLocation& WithAwsRegion(const Aws::String& value) { SetAwsRegion(value); return *this;}
    inline AwsLocation& WithAwsRegion(Aws::String&& value) { SetAwsRegion(std::move(value)); return *this;}
    inline AwsLocation& WithAwsRegion(const char* value) { SetAwsRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM connection ID of a connection.</p>
     */
    inline const Aws::String& GetIamConnectionId() const{ return m_iamConnectionId; }
    inline bool IamConnectionIdHasBeenSet() const { return m_iamConnectionIdHasBeenSet; }
    inline void SetIamConnectionId(const Aws::String& value) { m_iamConnectionIdHasBeenSet = true; m_iamConnectionId = value; }
    inline void SetIamConnectionId(Aws::String&& value) { m_iamConnectionIdHasBeenSet = true; m_iamConnectionId = std::move(value); }
    inline void SetIamConnectionId(const char* value) { m_iamConnectionIdHasBeenSet = true; m_iamConnectionId.assign(value); }
    inline AwsLocation& WithIamConnectionId(const Aws::String& value) { SetIamConnectionId(value); return *this;}
    inline AwsLocation& WithIamConnectionId(Aws::String&& value) { SetIamConnectionId(std::move(value)); return *this;}
    inline AwsLocation& WithIamConnectionId(const char* value) { SetIamConnectionId(value); return *this;}
    ///@}
  private:

    Aws::String m_accessRole;
    bool m_accessRoleHasBeenSet = false;

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_awsRegion;
    bool m_awsRegionHasBeenSet = false;

    Aws::String m_iamConnectionId;
    bool m_iamConnectionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
