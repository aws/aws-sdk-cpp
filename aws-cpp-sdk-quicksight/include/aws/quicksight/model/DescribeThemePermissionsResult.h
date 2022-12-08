/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/ResourcePermission.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{
  class DescribeThemePermissionsResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeThemePermissionsResult();
    AWS_QUICKSIGHT_API DescribeThemePermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeThemePermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID for the theme.</p>
     */
    inline const Aws::String& GetThemeId() const{ return m_themeId; }

    /**
     * <p>The ID for the theme.</p>
     */
    inline void SetThemeId(const Aws::String& value) { m_themeId = value; }

    /**
     * <p>The ID for the theme.</p>
     */
    inline void SetThemeId(Aws::String&& value) { m_themeId = std::move(value); }

    /**
     * <p>The ID for the theme.</p>
     */
    inline void SetThemeId(const char* value) { m_themeId.assign(value); }

    /**
     * <p>The ID for the theme.</p>
     */
    inline DescribeThemePermissionsResult& WithThemeId(const Aws::String& value) { SetThemeId(value); return *this;}

    /**
     * <p>The ID for the theme.</p>
     */
    inline DescribeThemePermissionsResult& WithThemeId(Aws::String&& value) { SetThemeId(std::move(value)); return *this;}

    /**
     * <p>The ID for the theme.</p>
     */
    inline DescribeThemePermissionsResult& WithThemeId(const char* value) { SetThemeId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the theme.</p>
     */
    inline const Aws::String& GetThemeArn() const{ return m_themeArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the theme.</p>
     */
    inline void SetThemeArn(const Aws::String& value) { m_themeArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the theme.</p>
     */
    inline void SetThemeArn(Aws::String&& value) { m_themeArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the theme.</p>
     */
    inline void SetThemeArn(const char* value) { m_themeArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the theme.</p>
     */
    inline DescribeThemePermissionsResult& WithThemeArn(const Aws::String& value) { SetThemeArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the theme.</p>
     */
    inline DescribeThemePermissionsResult& WithThemeArn(Aws::String&& value) { SetThemeArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the theme.</p>
     */
    inline DescribeThemePermissionsResult& WithThemeArn(const char* value) { SetThemeArn(value); return *this;}


    /**
     * <p>A list of resource permissions set on the theme. </p>
     */
    inline const Aws::Vector<ResourcePermission>& GetPermissions() const{ return m_permissions; }

    /**
     * <p>A list of resource permissions set on the theme. </p>
     */
    inline void SetPermissions(const Aws::Vector<ResourcePermission>& value) { m_permissions = value; }

    /**
     * <p>A list of resource permissions set on the theme. </p>
     */
    inline void SetPermissions(Aws::Vector<ResourcePermission>&& value) { m_permissions = std::move(value); }

    /**
     * <p>A list of resource permissions set on the theme. </p>
     */
    inline DescribeThemePermissionsResult& WithPermissions(const Aws::Vector<ResourcePermission>& value) { SetPermissions(value); return *this;}

    /**
     * <p>A list of resource permissions set on the theme. </p>
     */
    inline DescribeThemePermissionsResult& WithPermissions(Aws::Vector<ResourcePermission>&& value) { SetPermissions(std::move(value)); return *this;}

    /**
     * <p>A list of resource permissions set on the theme. </p>
     */
    inline DescribeThemePermissionsResult& AddPermissions(const ResourcePermission& value) { m_permissions.push_back(value); return *this; }

    /**
     * <p>A list of resource permissions set on the theme. </p>
     */
    inline DescribeThemePermissionsResult& AddPermissions(ResourcePermission&& value) { m_permissions.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DescribeThemePermissionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DescribeThemePermissionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DescribeThemePermissionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline DescribeThemePermissionsResult& WithStatus(int value) { SetStatus(value); return *this;}

  private:

    Aws::String m_themeId;

    Aws::String m_themeArn;

    Aws::Vector<ResourcePermission> m_permissions;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
