/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/ObjectLambdaConfiguration.h>
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
namespace S3Control
{
namespace Model
{
  class GetAccessPointConfigurationForObjectLambdaResult
  {
  public:
    AWS_S3CONTROL_API GetAccessPointConfigurationForObjectLambdaResult();
    AWS_S3CONTROL_API GetAccessPointConfigurationForObjectLambdaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API GetAccessPointConfigurationForObjectLambdaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Object Lambda Access Point configuration document.</p>
     */
    inline const ObjectLambdaConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>Object Lambda Access Point configuration document.</p>
     */
    inline void SetConfiguration(const ObjectLambdaConfiguration& value) { m_configuration = value; }

    /**
     * <p>Object Lambda Access Point configuration document.</p>
     */
    inline void SetConfiguration(ObjectLambdaConfiguration&& value) { m_configuration = std::move(value); }

    /**
     * <p>Object Lambda Access Point configuration document.</p>
     */
    inline GetAccessPointConfigurationForObjectLambdaResult& WithConfiguration(const ObjectLambdaConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>Object Lambda Access Point configuration document.</p>
     */
    inline GetAccessPointConfigurationForObjectLambdaResult& WithConfiguration(ObjectLambdaConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}

  private:

    ObjectLambdaConfiguration m_configuration;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
