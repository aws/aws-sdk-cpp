/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/BlockPublicAccessConfiguration.h>
#include <aws/elasticmapreduce/model/BlockPublicAccessConfigurationMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace EMR
{
namespace Model
{
  class GetBlockPublicAccessConfigurationResult
  {
  public:
    AWS_EMR_API GetBlockPublicAccessConfigurationResult() = default;
    AWS_EMR_API GetBlockPublicAccessConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API GetBlockPublicAccessConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A configuration for Amazon EMR block public access. The configuration applies
     * to all clusters created in your account for the current Region. The
     * configuration specifies whether block public access is enabled. If block public
     * access is enabled, security groups associated with the cluster cannot have rules
     * that allow inbound traffic from 0.0.0.0/0 or ::/0 on a port, unless the port is
     * specified as an exception using
     * <code>PermittedPublicSecurityGroupRuleRanges</code> in the
     * <code>BlockPublicAccessConfiguration</code>. By default, Port 22 (SSH) is an
     * exception, and public access is allowed on this port. You can change this by
     * updating the block public access configuration to remove the exception.</p>
     *  <p>For accounts that created clusters in a Region before November 25,
     * 2019, block public access is disabled by default in that Region. To use this
     * feature, you must manually enable and configure it. For accounts that did not
     * create an Amazon EMR cluster in a Region before this date, block public access
     * is enabled by default in that Region.</p> 
     */
    inline const BlockPublicAccessConfiguration& GetBlockPublicAccessConfiguration() const { return m_blockPublicAccessConfiguration; }
    template<typename BlockPublicAccessConfigurationT = BlockPublicAccessConfiguration>
    void SetBlockPublicAccessConfiguration(BlockPublicAccessConfigurationT&& value) { m_blockPublicAccessConfigurationHasBeenSet = true; m_blockPublicAccessConfiguration = std::forward<BlockPublicAccessConfigurationT>(value); }
    template<typename BlockPublicAccessConfigurationT = BlockPublicAccessConfiguration>
    GetBlockPublicAccessConfigurationResult& WithBlockPublicAccessConfiguration(BlockPublicAccessConfigurationT&& value) { SetBlockPublicAccessConfiguration(std::forward<BlockPublicAccessConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Properties that describe the Amazon Web Services principal that created the
     * <code>BlockPublicAccessConfiguration</code> using the
     * <code>PutBlockPublicAccessConfiguration</code> action as well as the date and
     * time that the configuration was created. Each time a configuration for block
     * public access is updated, Amazon EMR updates this metadata.</p>
     */
    inline const BlockPublicAccessConfigurationMetadata& GetBlockPublicAccessConfigurationMetadata() const { return m_blockPublicAccessConfigurationMetadata; }
    template<typename BlockPublicAccessConfigurationMetadataT = BlockPublicAccessConfigurationMetadata>
    void SetBlockPublicAccessConfigurationMetadata(BlockPublicAccessConfigurationMetadataT&& value) { m_blockPublicAccessConfigurationMetadataHasBeenSet = true; m_blockPublicAccessConfigurationMetadata = std::forward<BlockPublicAccessConfigurationMetadataT>(value); }
    template<typename BlockPublicAccessConfigurationMetadataT = BlockPublicAccessConfigurationMetadata>
    GetBlockPublicAccessConfigurationResult& WithBlockPublicAccessConfigurationMetadata(BlockPublicAccessConfigurationMetadataT&& value) { SetBlockPublicAccessConfigurationMetadata(std::forward<BlockPublicAccessConfigurationMetadataT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBlockPublicAccessConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    BlockPublicAccessConfiguration m_blockPublicAccessConfiguration;
    bool m_blockPublicAccessConfigurationHasBeenSet = false;

    BlockPublicAccessConfigurationMetadata m_blockPublicAccessConfigurationMetadata;
    bool m_blockPublicAccessConfigurationMetadataHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
