/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/BundleTask.h>
#include <aws/ec2/model/ResponseMetadata.h>
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
  /**
   * <p>Contains the output of CancelBundleTask.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelBundleTaskResult">AWS
   * API Reference</a></p>
   */
  class CancelBundleTaskResponse
  {
  public:
    AWS_EC2_API CancelBundleTaskResponse();
    AWS_EC2_API CancelBundleTaskResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CancelBundleTaskResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the bundle task.</p>
     */
    inline const BundleTask& GetBundleTask() const{ return m_bundleTask; }

    /**
     * <p>Information about the bundle task.</p>
     */
    inline void SetBundleTask(const BundleTask& value) { m_bundleTask = value; }

    /**
     * <p>Information about the bundle task.</p>
     */
    inline void SetBundleTask(BundleTask&& value) { m_bundleTask = std::move(value); }

    /**
     * <p>Information about the bundle task.</p>
     */
    inline CancelBundleTaskResponse& WithBundleTask(const BundleTask& value) { SetBundleTask(value); return *this;}

    /**
     * <p>Information about the bundle task.</p>
     */
    inline CancelBundleTaskResponse& WithBundleTask(BundleTask&& value) { SetBundleTask(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CancelBundleTaskResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CancelBundleTaskResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    BundleTask m_bundleTask;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
