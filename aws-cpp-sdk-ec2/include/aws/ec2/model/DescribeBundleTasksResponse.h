/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/BundleTask.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class DescribeBundleTasksResponse
  {
  public:
    AWS_EC2_API DescribeBundleTasksResponse();
    AWS_EC2_API DescribeBundleTasksResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeBundleTasksResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the bundle tasks.</p>
     */
    inline const Aws::Vector<BundleTask>& GetBundleTasks() const{ return m_bundleTasks; }

    /**
     * <p>Information about the bundle tasks.</p>
     */
    inline void SetBundleTasks(const Aws::Vector<BundleTask>& value) { m_bundleTasks = value; }

    /**
     * <p>Information about the bundle tasks.</p>
     */
    inline void SetBundleTasks(Aws::Vector<BundleTask>&& value) { m_bundleTasks = std::move(value); }

    /**
     * <p>Information about the bundle tasks.</p>
     */
    inline DescribeBundleTasksResponse& WithBundleTasks(const Aws::Vector<BundleTask>& value) { SetBundleTasks(value); return *this;}

    /**
     * <p>Information about the bundle tasks.</p>
     */
    inline DescribeBundleTasksResponse& WithBundleTasks(Aws::Vector<BundleTask>&& value) { SetBundleTasks(std::move(value)); return *this;}

    /**
     * <p>Information about the bundle tasks.</p>
     */
    inline DescribeBundleTasksResponse& AddBundleTasks(const BundleTask& value) { m_bundleTasks.push_back(value); return *this; }

    /**
     * <p>Information about the bundle tasks.</p>
     */
    inline DescribeBundleTasksResponse& AddBundleTasks(BundleTask&& value) { m_bundleTasks.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeBundleTasksResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeBundleTasksResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<BundleTask> m_bundleTasks;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
