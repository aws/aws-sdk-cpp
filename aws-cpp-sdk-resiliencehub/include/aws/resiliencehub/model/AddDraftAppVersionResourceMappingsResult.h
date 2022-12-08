/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehub/model/ResourceMapping.h>
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
namespace ResilienceHub
{
namespace Model
{
  class AddDraftAppVersionResourceMappingsResult
  {
  public:
    AWS_RESILIENCEHUB_API AddDraftAppVersionResourceMappingsResult();
    AWS_RESILIENCEHUB_API AddDraftAppVersionResourceMappingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API AddDraftAppVersionResourceMappingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline const Aws::String& GetAppArn() const{ return m_appArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetAppArn(const Aws::String& value) { m_appArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetAppArn(Aws::String&& value) { m_appArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetAppArn(const char* value) { m_appArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline AddDraftAppVersionResourceMappingsResult& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline AddDraftAppVersionResourceMappingsResult& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline AddDraftAppVersionResourceMappingsResult& WithAppArn(const char* value) { SetAppArn(value); return *this;}


    /**
     * <p>The version of the application.</p>
     */
    inline const Aws::String& GetAppVersion() const{ return m_appVersion; }

    /**
     * <p>The version of the application.</p>
     */
    inline void SetAppVersion(const Aws::String& value) { m_appVersion = value; }

    /**
     * <p>The version of the application.</p>
     */
    inline void SetAppVersion(Aws::String&& value) { m_appVersion = std::move(value); }

    /**
     * <p>The version of the application.</p>
     */
    inline void SetAppVersion(const char* value) { m_appVersion.assign(value); }

    /**
     * <p>The version of the application.</p>
     */
    inline AddDraftAppVersionResourceMappingsResult& WithAppVersion(const Aws::String& value) { SetAppVersion(value); return *this;}

    /**
     * <p>The version of the application.</p>
     */
    inline AddDraftAppVersionResourceMappingsResult& WithAppVersion(Aws::String&& value) { SetAppVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the application.</p>
     */
    inline AddDraftAppVersionResourceMappingsResult& WithAppVersion(const char* value) { SetAppVersion(value); return *this;}


    /**
     * <p>Mappings used to map logical resources from the template to physical
     * resources. You can use the mapping type <code>CFN_STACK</code> if the
     * application template uses a logical stack name. Or you can map individual
     * resources by using the mapping type <code>RESOURCE</code>. We recommend using
     * the mapping type <code>CFN_STACK</code> if the application is backed by a
     * CloudFormation stack.</p>
     */
    inline const Aws::Vector<ResourceMapping>& GetResourceMappings() const{ return m_resourceMappings; }

    /**
     * <p>Mappings used to map logical resources from the template to physical
     * resources. You can use the mapping type <code>CFN_STACK</code> if the
     * application template uses a logical stack name. Or you can map individual
     * resources by using the mapping type <code>RESOURCE</code>. We recommend using
     * the mapping type <code>CFN_STACK</code> if the application is backed by a
     * CloudFormation stack.</p>
     */
    inline void SetResourceMappings(const Aws::Vector<ResourceMapping>& value) { m_resourceMappings = value; }

    /**
     * <p>Mappings used to map logical resources from the template to physical
     * resources. You can use the mapping type <code>CFN_STACK</code> if the
     * application template uses a logical stack name. Or you can map individual
     * resources by using the mapping type <code>RESOURCE</code>. We recommend using
     * the mapping type <code>CFN_STACK</code> if the application is backed by a
     * CloudFormation stack.</p>
     */
    inline void SetResourceMappings(Aws::Vector<ResourceMapping>&& value) { m_resourceMappings = std::move(value); }

    /**
     * <p>Mappings used to map logical resources from the template to physical
     * resources. You can use the mapping type <code>CFN_STACK</code> if the
     * application template uses a logical stack name. Or you can map individual
     * resources by using the mapping type <code>RESOURCE</code>. We recommend using
     * the mapping type <code>CFN_STACK</code> if the application is backed by a
     * CloudFormation stack.</p>
     */
    inline AddDraftAppVersionResourceMappingsResult& WithResourceMappings(const Aws::Vector<ResourceMapping>& value) { SetResourceMappings(value); return *this;}

    /**
     * <p>Mappings used to map logical resources from the template to physical
     * resources. You can use the mapping type <code>CFN_STACK</code> if the
     * application template uses a logical stack name. Or you can map individual
     * resources by using the mapping type <code>RESOURCE</code>. We recommend using
     * the mapping type <code>CFN_STACK</code> if the application is backed by a
     * CloudFormation stack.</p>
     */
    inline AddDraftAppVersionResourceMappingsResult& WithResourceMappings(Aws::Vector<ResourceMapping>&& value) { SetResourceMappings(std::move(value)); return *this;}

    /**
     * <p>Mappings used to map logical resources from the template to physical
     * resources. You can use the mapping type <code>CFN_STACK</code> if the
     * application template uses a logical stack name. Or you can map individual
     * resources by using the mapping type <code>RESOURCE</code>. We recommend using
     * the mapping type <code>CFN_STACK</code> if the application is backed by a
     * CloudFormation stack.</p>
     */
    inline AddDraftAppVersionResourceMappingsResult& AddResourceMappings(const ResourceMapping& value) { m_resourceMappings.push_back(value); return *this; }

    /**
     * <p>Mappings used to map logical resources from the template to physical
     * resources. You can use the mapping type <code>CFN_STACK</code> if the
     * application template uses a logical stack name. Or you can map individual
     * resources by using the mapping type <code>RESOURCE</code>. We recommend using
     * the mapping type <code>CFN_STACK</code> if the application is backed by a
     * CloudFormation stack.</p>
     */
    inline AddDraftAppVersionResourceMappingsResult& AddResourceMappings(ResourceMapping&& value) { m_resourceMappings.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_appArn;

    Aws::String m_appVersion;

    Aws::Vector<ResourceMapping> m_resourceMappings;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
