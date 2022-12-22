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
  class AssociateAttributeGroupResult
  {
  public:
    AWS_APPREGISTRY_API AssociateAttributeGroupResult();
    AWS_APPREGISTRY_API AssociateAttributeGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPREGISTRY_API AssociateAttributeGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon resource name (ARN) of the application that was augmented with
     * attributes.</p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }

    /**
     * <p>The Amazon resource name (ARN) of the application that was augmented with
     * attributes.</p>
     */
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArn = value; }

    /**
     * <p>The Amazon resource name (ARN) of the application that was augmented with
     * attributes.</p>
     */
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArn = std::move(value); }

    /**
     * <p>The Amazon resource name (ARN) of the application that was augmented with
     * attributes.</p>
     */
    inline void SetApplicationArn(const char* value) { m_applicationArn.assign(value); }

    /**
     * <p>The Amazon resource name (ARN) of the application that was augmented with
     * attributes.</p>
     */
    inline AssociateAttributeGroupResult& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}

    /**
     * <p>The Amazon resource name (ARN) of the application that was augmented with
     * attributes.</p>
     */
    inline AssociateAttributeGroupResult& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon resource name (ARN) of the application that was augmented with
     * attributes.</p>
     */
    inline AssociateAttributeGroupResult& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}


    /**
     * <p>The Amazon resource name (ARN) of the attribute group that contains the
     * application's new attributes.</p>
     */
    inline const Aws::String& GetAttributeGroupArn() const{ return m_attributeGroupArn; }

    /**
     * <p>The Amazon resource name (ARN) of the attribute group that contains the
     * application's new attributes.</p>
     */
    inline void SetAttributeGroupArn(const Aws::String& value) { m_attributeGroupArn = value; }

    /**
     * <p>The Amazon resource name (ARN) of the attribute group that contains the
     * application's new attributes.</p>
     */
    inline void SetAttributeGroupArn(Aws::String&& value) { m_attributeGroupArn = std::move(value); }

    /**
     * <p>The Amazon resource name (ARN) of the attribute group that contains the
     * application's new attributes.</p>
     */
    inline void SetAttributeGroupArn(const char* value) { m_attributeGroupArn.assign(value); }

    /**
     * <p>The Amazon resource name (ARN) of the attribute group that contains the
     * application's new attributes.</p>
     */
    inline AssociateAttributeGroupResult& WithAttributeGroupArn(const Aws::String& value) { SetAttributeGroupArn(value); return *this;}

    /**
     * <p>The Amazon resource name (ARN) of the attribute group that contains the
     * application's new attributes.</p>
     */
    inline AssociateAttributeGroupResult& WithAttributeGroupArn(Aws::String&& value) { SetAttributeGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon resource name (ARN) of the attribute group that contains the
     * application's new attributes.</p>
     */
    inline AssociateAttributeGroupResult& WithAttributeGroupArn(const char* value) { SetAttributeGroupArn(value); return *this;}

  private:

    Aws::String m_applicationArn;

    Aws::String m_attributeGroupArn;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
