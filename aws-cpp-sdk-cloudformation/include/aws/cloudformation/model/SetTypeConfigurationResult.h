﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
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
namespace CloudFormation
{
namespace Model
{
  class AWS_CLOUDFORMATION_API SetTypeConfigurationResult
  {
  public:
    SetTypeConfigurationResult();
    SetTypeConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    SetTypeConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The Amazon Resource Name (ARN) for the configuration data, in this account
     * and region.</p> <p>Conditional: You must specify <code>ConfigurationArn</code>,
     * or <code>Type</code> and <code>TypeName</code>.</p>
     */
    inline const Aws::String& GetConfigurationArn() const{ return m_configurationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the configuration data, in this account
     * and region.</p> <p>Conditional: You must specify <code>ConfigurationArn</code>,
     * or <code>Type</code> and <code>TypeName</code>.</p>
     */
    inline void SetConfigurationArn(const Aws::String& value) { m_configurationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the configuration data, in this account
     * and region.</p> <p>Conditional: You must specify <code>ConfigurationArn</code>,
     * or <code>Type</code> and <code>TypeName</code>.</p>
     */
    inline void SetConfigurationArn(Aws::String&& value) { m_configurationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the configuration data, in this account
     * and region.</p> <p>Conditional: You must specify <code>ConfigurationArn</code>,
     * or <code>Type</code> and <code>TypeName</code>.</p>
     */
    inline void SetConfigurationArn(const char* value) { m_configurationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the configuration data, in this account
     * and region.</p> <p>Conditional: You must specify <code>ConfigurationArn</code>,
     * or <code>Type</code> and <code>TypeName</code>.</p>
     */
    inline SetTypeConfigurationResult& WithConfigurationArn(const Aws::String& value) { SetConfigurationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the configuration data, in this account
     * and region.</p> <p>Conditional: You must specify <code>ConfigurationArn</code>,
     * or <code>Type</code> and <code>TypeName</code>.</p>
     */
    inline SetTypeConfigurationResult& WithConfigurationArn(Aws::String&& value) { SetConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the configuration data, in this account
     * and region.</p> <p>Conditional: You must specify <code>ConfigurationArn</code>,
     * or <code>Type</code> and <code>TypeName</code>.</p>
     */
    inline SetTypeConfigurationResult& WithConfigurationArn(const char* value) { SetConfigurationArn(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline SetTypeConfigurationResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline SetTypeConfigurationResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_configurationArn;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
