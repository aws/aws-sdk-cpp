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
  class DescribeDataSetPermissionsResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeDataSetPermissionsResult();
    AWS_QUICKSIGHT_API DescribeDataSetPermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeDataSetPermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline const Aws::String& GetDataSetArn() const{ return m_dataSetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline void SetDataSetArn(const Aws::String& value) { m_dataSetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline void SetDataSetArn(Aws::String&& value) { m_dataSetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline void SetDataSetArn(const char* value) { m_dataSetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline DescribeDataSetPermissionsResult& WithDataSetArn(const Aws::String& value) { SetDataSetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline DescribeDataSetPermissionsResult& WithDataSetArn(Aws::String&& value) { SetDataSetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline DescribeDataSetPermissionsResult& WithDataSetArn(const char* value) { SetDataSetArn(value); return *this;}


    /**
     * <p>The ID for the dataset that you want to create. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }

    /**
     * <p>The ID for the dataset that you want to create. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline void SetDataSetId(const Aws::String& value) { m_dataSetId = value; }

    /**
     * <p>The ID for the dataset that you want to create. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline void SetDataSetId(Aws::String&& value) { m_dataSetId = std::move(value); }

    /**
     * <p>The ID for the dataset that you want to create. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline void SetDataSetId(const char* value) { m_dataSetId.assign(value); }

    /**
     * <p>The ID for the dataset that you want to create. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline DescribeDataSetPermissionsResult& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}

    /**
     * <p>The ID for the dataset that you want to create. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline DescribeDataSetPermissionsResult& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}

    /**
     * <p>The ID for the dataset that you want to create. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline DescribeDataSetPermissionsResult& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}


    /**
     * <p>A list of resource permissions on the dataset.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetPermissions() const{ return m_permissions; }

    /**
     * <p>A list of resource permissions on the dataset.</p>
     */
    inline void SetPermissions(const Aws::Vector<ResourcePermission>& value) { m_permissions = value; }

    /**
     * <p>A list of resource permissions on the dataset.</p>
     */
    inline void SetPermissions(Aws::Vector<ResourcePermission>&& value) { m_permissions = std::move(value); }

    /**
     * <p>A list of resource permissions on the dataset.</p>
     */
    inline DescribeDataSetPermissionsResult& WithPermissions(const Aws::Vector<ResourcePermission>& value) { SetPermissions(value); return *this;}

    /**
     * <p>A list of resource permissions on the dataset.</p>
     */
    inline DescribeDataSetPermissionsResult& WithPermissions(Aws::Vector<ResourcePermission>&& value) { SetPermissions(std::move(value)); return *this;}

    /**
     * <p>A list of resource permissions on the dataset.</p>
     */
    inline DescribeDataSetPermissionsResult& AddPermissions(const ResourcePermission& value) { m_permissions.push_back(value); return *this; }

    /**
     * <p>A list of resource permissions on the dataset.</p>
     */
    inline DescribeDataSetPermissionsResult& AddPermissions(ResourcePermission&& value) { m_permissions.push_back(std::move(value)); return *this; }


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
    inline DescribeDataSetPermissionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DescribeDataSetPermissionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DescribeDataSetPermissionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


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
    inline DescribeDataSetPermissionsResult& WithStatus(int value) { SetStatus(value); return *this;}

  private:

    Aws::String m_dataSetArn;

    Aws::String m_dataSetId;

    Aws::Vector<ResourcePermission> m_permissions;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
