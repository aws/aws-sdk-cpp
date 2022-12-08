/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class DescribeServiceErrorsRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API DescribeServiceErrorsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeServiceErrors"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The stack ID. If you use this parameter, <code>DescribeServiceErrors</code>
     * returns descriptions of the errors associated with the specified stack.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>The stack ID. If you use this parameter, <code>DescribeServiceErrors</code>
     * returns descriptions of the errors associated with the specified stack.</p>
     */
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }

    /**
     * <p>The stack ID. If you use this parameter, <code>DescribeServiceErrors</code>
     * returns descriptions of the errors associated with the specified stack.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>The stack ID. If you use this parameter, <code>DescribeServiceErrors</code>
     * returns descriptions of the errors associated with the specified stack.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }

    /**
     * <p>The stack ID. If you use this parameter, <code>DescribeServiceErrors</code>
     * returns descriptions of the errors associated with the specified stack.</p>
     */
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }

    /**
     * <p>The stack ID. If you use this parameter, <code>DescribeServiceErrors</code>
     * returns descriptions of the errors associated with the specified stack.</p>
     */
    inline DescribeServiceErrorsRequest& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>The stack ID. If you use this parameter, <code>DescribeServiceErrors</code>
     * returns descriptions of the errors associated with the specified stack.</p>
     */
    inline DescribeServiceErrorsRequest& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>The stack ID. If you use this parameter, <code>DescribeServiceErrors</code>
     * returns descriptions of the errors associated with the specified stack.</p>
     */
    inline DescribeServiceErrorsRequest& WithStackId(const char* value) { SetStackId(value); return *this;}


    /**
     * <p>The instance ID. If you use this parameter,
     * <code>DescribeServiceErrors</code> returns descriptions of the errors associated
     * with the specified instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The instance ID. If you use this parameter,
     * <code>DescribeServiceErrors</code> returns descriptions of the errors associated
     * with the specified instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The instance ID. If you use this parameter,
     * <code>DescribeServiceErrors</code> returns descriptions of the errors associated
     * with the specified instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The instance ID. If you use this parameter,
     * <code>DescribeServiceErrors</code> returns descriptions of the errors associated
     * with the specified instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The instance ID. If you use this parameter,
     * <code>DescribeServiceErrors</code> returns descriptions of the errors associated
     * with the specified instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The instance ID. If you use this parameter,
     * <code>DescribeServiceErrors</code> returns descriptions of the errors associated
     * with the specified instance.</p>
     */
    inline DescribeServiceErrorsRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The instance ID. If you use this parameter,
     * <code>DescribeServiceErrors</code> returns descriptions of the errors associated
     * with the specified instance.</p>
     */
    inline DescribeServiceErrorsRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The instance ID. If you use this parameter,
     * <code>DescribeServiceErrors</code> returns descriptions of the errors associated
     * with the specified instance.</p>
     */
    inline DescribeServiceErrorsRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>An array of service error IDs. If you use this parameter,
     * <code>DescribeServiceErrors</code> returns descriptions of the specified errors.
     * Otherwise, it returns a description of every error.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServiceErrorIds() const{ return m_serviceErrorIds; }

    /**
     * <p>An array of service error IDs. If you use this parameter,
     * <code>DescribeServiceErrors</code> returns descriptions of the specified errors.
     * Otherwise, it returns a description of every error.</p>
     */
    inline bool ServiceErrorIdsHasBeenSet() const { return m_serviceErrorIdsHasBeenSet; }

    /**
     * <p>An array of service error IDs. If you use this parameter,
     * <code>DescribeServiceErrors</code> returns descriptions of the specified errors.
     * Otherwise, it returns a description of every error.</p>
     */
    inline void SetServiceErrorIds(const Aws::Vector<Aws::String>& value) { m_serviceErrorIdsHasBeenSet = true; m_serviceErrorIds = value; }

    /**
     * <p>An array of service error IDs. If you use this parameter,
     * <code>DescribeServiceErrors</code> returns descriptions of the specified errors.
     * Otherwise, it returns a description of every error.</p>
     */
    inline void SetServiceErrorIds(Aws::Vector<Aws::String>&& value) { m_serviceErrorIdsHasBeenSet = true; m_serviceErrorIds = std::move(value); }

    /**
     * <p>An array of service error IDs. If you use this parameter,
     * <code>DescribeServiceErrors</code> returns descriptions of the specified errors.
     * Otherwise, it returns a description of every error.</p>
     */
    inline DescribeServiceErrorsRequest& WithServiceErrorIds(const Aws::Vector<Aws::String>& value) { SetServiceErrorIds(value); return *this;}

    /**
     * <p>An array of service error IDs. If you use this parameter,
     * <code>DescribeServiceErrors</code> returns descriptions of the specified errors.
     * Otherwise, it returns a description of every error.</p>
     */
    inline DescribeServiceErrorsRequest& WithServiceErrorIds(Aws::Vector<Aws::String>&& value) { SetServiceErrorIds(std::move(value)); return *this;}

    /**
     * <p>An array of service error IDs. If you use this parameter,
     * <code>DescribeServiceErrors</code> returns descriptions of the specified errors.
     * Otherwise, it returns a description of every error.</p>
     */
    inline DescribeServiceErrorsRequest& AddServiceErrorIds(const Aws::String& value) { m_serviceErrorIdsHasBeenSet = true; m_serviceErrorIds.push_back(value); return *this; }

    /**
     * <p>An array of service error IDs. If you use this parameter,
     * <code>DescribeServiceErrors</code> returns descriptions of the specified errors.
     * Otherwise, it returns a description of every error.</p>
     */
    inline DescribeServiceErrorsRequest& AddServiceErrorIds(Aws::String&& value) { m_serviceErrorIdsHasBeenSet = true; m_serviceErrorIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of service error IDs. If you use this parameter,
     * <code>DescribeServiceErrors</code> returns descriptions of the specified errors.
     * Otherwise, it returns a description of every error.</p>
     */
    inline DescribeServiceErrorsRequest& AddServiceErrorIds(const char* value) { m_serviceErrorIdsHasBeenSet = true; m_serviceErrorIds.push_back(value); return *this; }

  private:

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_serviceErrorIds;
    bool m_serviceErrorIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
