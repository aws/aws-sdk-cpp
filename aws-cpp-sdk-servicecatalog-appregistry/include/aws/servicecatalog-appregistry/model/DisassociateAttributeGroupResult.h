/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
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
namespace AppRegistry
{
namespace Model
{
  class DisassociateAttributeGroupResult
  {
  public:
    AWS_APPREGISTRY_API DisassociateAttributeGroupResult();
    AWS_APPREGISTRY_API DisassociateAttributeGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPREGISTRY_API DisassociateAttributeGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon resource name (ARN) that specifies the application.</p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }

    /**
     * <p>The Amazon resource name (ARN) that specifies the application.</p>
     */
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArn = value; }

    /**
     * <p>The Amazon resource name (ARN) that specifies the application.</p>
     */
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArn = std::move(value); }

    /**
     * <p>The Amazon resource name (ARN) that specifies the application.</p>
     */
    inline void SetApplicationArn(const char* value) { m_applicationArn.assign(value); }

    /**
     * <p>The Amazon resource name (ARN) that specifies the application.</p>
     */
    inline DisassociateAttributeGroupResult& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}

    /**
     * <p>The Amazon resource name (ARN) that specifies the application.</p>
     */
    inline DisassociateAttributeGroupResult& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon resource name (ARN) that specifies the application.</p>
     */
    inline DisassociateAttributeGroupResult& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}


    /**
     * <p>The Amazon resource name (ARN) that specifies the attribute group.</p>
     */
    inline const Aws::String& GetAttributeGroupArn() const{ return m_attributeGroupArn; }

    /**
     * <p>The Amazon resource name (ARN) that specifies the attribute group.</p>
     */
    inline void SetAttributeGroupArn(const Aws::String& value) { m_attributeGroupArn = value; }

    /**
     * <p>The Amazon resource name (ARN) that specifies the attribute group.</p>
     */
    inline void SetAttributeGroupArn(Aws::String&& value) { m_attributeGroupArn = std::move(value); }

    /**
     * <p>The Amazon resource name (ARN) that specifies the attribute group.</p>
     */
    inline void SetAttributeGroupArn(const char* value) { m_attributeGroupArn.assign(value); }

    /**
     * <p>The Amazon resource name (ARN) that specifies the attribute group.</p>
     */
    inline DisassociateAttributeGroupResult& WithAttributeGroupArn(const Aws::String& value) { SetAttributeGroupArn(value); return *this;}

    /**
     * <p>The Amazon resource name (ARN) that specifies the attribute group.</p>
     */
    inline DisassociateAttributeGroupResult& WithAttributeGroupArn(Aws::String&& value) { SetAttributeGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon resource name (ARN) that specifies the attribute group.</p>
     */
    inline DisassociateAttributeGroupResult& WithAttributeGroupArn(const char* value) { SetAttributeGroupArn(value); return *this;}

  private:

    Aws::String m_applicationArn;

    Aws::String m_attributeGroupArn;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
