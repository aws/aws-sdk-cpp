/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/macie2/model/SuppressDataIdentifier.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Macie2
{
namespace Model
{

  /**
   */
  class UpdateResourceProfileDetectionsRequest : public Macie2Request
  {
  public:
    AWS_MACIE2_API UpdateResourceProfileDetectionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateResourceProfileDetections"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;

    AWS_MACIE2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the S3 bucket that the request applies
     * to.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    UpdateResourceProfileDetectionsRequest& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects, one for each custom data identifier or managed data
     * identifier that detected a type of sensitive data to exclude from the bucket's
     * score. To include all sensitive data types in the score, don't specify any
     * values for this array.</p>
     */
    inline const Aws::Vector<SuppressDataIdentifier>& GetSuppressDataIdentifiers() const { return m_suppressDataIdentifiers; }
    inline bool SuppressDataIdentifiersHasBeenSet() const { return m_suppressDataIdentifiersHasBeenSet; }
    template<typename SuppressDataIdentifiersT = Aws::Vector<SuppressDataIdentifier>>
    void SetSuppressDataIdentifiers(SuppressDataIdentifiersT&& value) { m_suppressDataIdentifiersHasBeenSet = true; m_suppressDataIdentifiers = std::forward<SuppressDataIdentifiersT>(value); }
    template<typename SuppressDataIdentifiersT = Aws::Vector<SuppressDataIdentifier>>
    UpdateResourceProfileDetectionsRequest& WithSuppressDataIdentifiers(SuppressDataIdentifiersT&& value) { SetSuppressDataIdentifiers(std::forward<SuppressDataIdentifiersT>(value)); return *this;}
    template<typename SuppressDataIdentifiersT = SuppressDataIdentifier>
    UpdateResourceProfileDetectionsRequest& AddSuppressDataIdentifiers(SuppressDataIdentifiersT&& value) { m_suppressDataIdentifiersHasBeenSet = true; m_suppressDataIdentifiers.emplace_back(std::forward<SuppressDataIdentifiersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Vector<SuppressDataIdentifier> m_suppressDataIdentifiers;
    bool m_suppressDataIdentifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
