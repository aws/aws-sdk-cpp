/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/BlockPublicAccessConfiguration.h>
#include <aws/elasticmapreduce/model/BlockPublicAccessConfigurationMetadata.h>
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
    AWS_EMR_API GetBlockPublicAccessConfigurationResult();
    AWS_EMR_API GetBlockPublicAccessConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API GetBlockPublicAccessConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
     * create an EMR cluster in a Region before this date, block public access is
     * enabled by default in that Region.</p> 
     */
    inline const BlockPublicAccessConfiguration& GetBlockPublicAccessConfiguration() const{ return m_blockPublicAccessConfiguration; }

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
     * create an EMR cluster in a Region before this date, block public access is
     * enabled by default in that Region.</p> 
     */
    inline void SetBlockPublicAccessConfiguration(const BlockPublicAccessConfiguration& value) { m_blockPublicAccessConfiguration = value; }

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
     * create an EMR cluster in a Region before this date, block public access is
     * enabled by default in that Region.</p> 
     */
    inline void SetBlockPublicAccessConfiguration(BlockPublicAccessConfiguration&& value) { m_blockPublicAccessConfiguration = std::move(value); }

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
     * create an EMR cluster in a Region before this date, block public access is
     * enabled by default in that Region.</p> 
     */
    inline GetBlockPublicAccessConfigurationResult& WithBlockPublicAccessConfiguration(const BlockPublicAccessConfiguration& value) { SetBlockPublicAccessConfiguration(value); return *this;}

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
     * create an EMR cluster in a Region before this date, block public access is
     * enabled by default in that Region.</p> 
     */
    inline GetBlockPublicAccessConfigurationResult& WithBlockPublicAccessConfiguration(BlockPublicAccessConfiguration&& value) { SetBlockPublicAccessConfiguration(std::move(value)); return *this;}


    /**
     * <p>Properties that describe the Amazon Web Services principal that created the
     * <code>BlockPublicAccessConfiguration</code> using the
     * <code>PutBlockPublicAccessConfiguration</code> action as well as the date and
     * time that the configuration was created. Each time a configuration for block
     * public access is updated, Amazon EMR updates this metadata.</p>
     */
    inline const BlockPublicAccessConfigurationMetadata& GetBlockPublicAccessConfigurationMetadata() const{ return m_blockPublicAccessConfigurationMetadata; }

    /**
     * <p>Properties that describe the Amazon Web Services principal that created the
     * <code>BlockPublicAccessConfiguration</code> using the
     * <code>PutBlockPublicAccessConfiguration</code> action as well as the date and
     * time that the configuration was created. Each time a configuration for block
     * public access is updated, Amazon EMR updates this metadata.</p>
     */
    inline void SetBlockPublicAccessConfigurationMetadata(const BlockPublicAccessConfigurationMetadata& value) { m_blockPublicAccessConfigurationMetadata = value; }

    /**
     * <p>Properties that describe the Amazon Web Services principal that created the
     * <code>BlockPublicAccessConfiguration</code> using the
     * <code>PutBlockPublicAccessConfiguration</code> action as well as the date and
     * time that the configuration was created. Each time a configuration for block
     * public access is updated, Amazon EMR updates this metadata.</p>
     */
    inline void SetBlockPublicAccessConfigurationMetadata(BlockPublicAccessConfigurationMetadata&& value) { m_blockPublicAccessConfigurationMetadata = std::move(value); }

    /**
     * <p>Properties that describe the Amazon Web Services principal that created the
     * <code>BlockPublicAccessConfiguration</code> using the
     * <code>PutBlockPublicAccessConfiguration</code> action as well as the date and
     * time that the configuration was created. Each time a configuration for block
     * public access is updated, Amazon EMR updates this metadata.</p>
     */
    inline GetBlockPublicAccessConfigurationResult& WithBlockPublicAccessConfigurationMetadata(const BlockPublicAccessConfigurationMetadata& value) { SetBlockPublicAccessConfigurationMetadata(value); return *this;}

    /**
     * <p>Properties that describe the Amazon Web Services principal that created the
     * <code>BlockPublicAccessConfiguration</code> using the
     * <code>PutBlockPublicAccessConfiguration</code> action as well as the date and
     * time that the configuration was created. Each time a configuration for block
     * public access is updated, Amazon EMR updates this metadata.</p>
     */
    inline GetBlockPublicAccessConfigurationResult& WithBlockPublicAccessConfigurationMetadata(BlockPublicAccessConfigurationMetadata&& value) { SetBlockPublicAccessConfigurationMetadata(std::move(value)); return *this;}

  private:

    BlockPublicAccessConfiguration m_blockPublicAccessConfiguration;

    BlockPublicAccessConfigurationMetadata m_blockPublicAccessConfigurationMetadata;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
