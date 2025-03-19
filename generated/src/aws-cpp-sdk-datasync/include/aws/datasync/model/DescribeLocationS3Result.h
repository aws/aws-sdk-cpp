/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/S3StorageClass.h>
#include <aws/datasync/model/S3Config.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
namespace DataSync
{
namespace Model
{
  /**
   * <p>DescribeLocationS3Response</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeLocationS3Response">AWS
   * API Reference</a></p>
   */
  class DescribeLocationS3Result
  {
  public:
    AWS_DATASYNC_API DescribeLocationS3Result() = default;
    AWS_DATASYNC_API DescribeLocationS3Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API DescribeLocationS3Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the Amazon S3 location.</p>
     */
    inline const Aws::String& GetLocationArn() const { return m_locationArn; }
    template<typename LocationArnT = Aws::String>
    void SetLocationArn(LocationArnT&& value) { m_locationArnHasBeenSet = true; m_locationArn = std::forward<LocationArnT>(value); }
    template<typename LocationArnT = Aws::String>
    DescribeLocationS3Result& WithLocationArn(LocationArnT&& value) { SetLocationArn(std::forward<LocationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the Amazon S3 location that was described.</p>
     */
    inline const Aws::String& GetLocationUri() const { return m_locationUri; }
    template<typename LocationUriT = Aws::String>
    void SetLocationUri(LocationUriT&& value) { m_locationUriHasBeenSet = true; m_locationUri = std::forward<LocationUriT>(value); }
    template<typename LocationUriT = Aws::String>
    DescribeLocationS3Result& WithLocationUri(LocationUriT&& value) { SetLocationUri(std::forward<LocationUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When Amazon S3 is a destination location, this is the storage class that you
     * chose for your objects.</p> <p>Some storage classes have behaviors that can
     * affect your Amazon S3 storage costs. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#using-storage-classes">Storage
     * class considerations with Amazon S3 transfers</a>.</p>
     */
    inline S3StorageClass GetS3StorageClass() const { return m_s3StorageClass; }
    inline void SetS3StorageClass(S3StorageClass value) { m_s3StorageClassHasBeenSet = true; m_s3StorageClass = value; }
    inline DescribeLocationS3Result& WithS3StorageClass(S3StorageClass value) { SetS3StorageClass(value); return *this;}
    ///@}

    ///@{
    
    inline const S3Config& GetS3Config() const { return m_s3Config; }
    template<typename S3ConfigT = S3Config>
    void SetS3Config(S3ConfigT&& value) { m_s3ConfigHasBeenSet = true; m_s3Config = std::forward<S3ConfigT>(value); }
    template<typename S3ConfigT = S3Config>
    DescribeLocationS3Result& WithS3Config(S3ConfigT&& value) { SetS3Config(std::forward<S3ConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARNs of the DataSync agents deployed on your Outpost when using working
     * with Amazon S3 on Outposts.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/deploy-agents.html#outposts-agent">Deploy
     * your DataSync agent on Outposts</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentArns() const { return m_agentArns; }
    template<typename AgentArnsT = Aws::Vector<Aws::String>>
    void SetAgentArns(AgentArnsT&& value) { m_agentArnsHasBeenSet = true; m_agentArns = std::forward<AgentArnsT>(value); }
    template<typename AgentArnsT = Aws::Vector<Aws::String>>
    DescribeLocationS3Result& WithAgentArns(AgentArnsT&& value) { SetAgentArns(std::forward<AgentArnsT>(value)); return *this;}
    template<typename AgentArnsT = Aws::String>
    DescribeLocationS3Result& AddAgentArns(AgentArnsT&& value) { m_agentArnsHasBeenSet = true; m_agentArns.emplace_back(std::forward<AgentArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time that the Amazon S3 location was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeLocationS3Result& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeLocationS3Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_locationArn;
    bool m_locationArnHasBeenSet = false;

    Aws::String m_locationUri;
    bool m_locationUriHasBeenSet = false;

    S3StorageClass m_s3StorageClass{S3StorageClass::NOT_SET};
    bool m_s3StorageClassHasBeenSet = false;

    S3Config m_s3Config;
    bool m_s3ConfigHasBeenSet = false;

    Aws::Vector<Aws::String> m_agentArns;
    bool m_agentArnsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
