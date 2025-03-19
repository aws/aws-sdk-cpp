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
    AWS_EC2_API DescribeBundleTasksResponse() = default;
    AWS_EC2_API DescribeBundleTasksResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeBundleTasksResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the bundle tasks.</p>
     */
    inline const Aws::Vector<BundleTask>& GetBundleTasks() const { return m_bundleTasks; }
    template<typename BundleTasksT = Aws::Vector<BundleTask>>
    void SetBundleTasks(BundleTasksT&& value) { m_bundleTasksHasBeenSet = true; m_bundleTasks = std::forward<BundleTasksT>(value); }
    template<typename BundleTasksT = Aws::Vector<BundleTask>>
    DescribeBundleTasksResponse& WithBundleTasks(BundleTasksT&& value) { SetBundleTasks(std::forward<BundleTasksT>(value)); return *this;}
    template<typename BundleTasksT = BundleTask>
    DescribeBundleTasksResponse& AddBundleTasks(BundleTasksT&& value) { m_bundleTasksHasBeenSet = true; m_bundleTasks.emplace_back(std::forward<BundleTasksT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeBundleTasksResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BundleTask> m_bundleTasks;
    bool m_bundleTasksHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
