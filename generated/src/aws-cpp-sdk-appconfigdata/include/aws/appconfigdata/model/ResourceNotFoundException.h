/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfigdata/AppConfigData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appconfigdata/model/ResourceType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppConfigData
{
namespace Model
{

  /**
   * <p>The requested resource could not be found.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appconfigdata-2021-11-11/ResourceNotFoundException">AWS
   * API Reference</a></p>
   */
  class ResourceNotFoundException
  {
  public:
    AWS_APPCONFIGDATA_API ResourceNotFoundException() = default;
    AWS_APPCONFIGDATA_API ResourceNotFoundException(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIGDATA_API ResourceNotFoundException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIGDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ResourceNotFoundException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource that was not found.</p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline ResourceNotFoundException& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map indicating which parameters in the request reference the resource that
     * was not found.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetReferencedBy() const { return m_referencedBy; }
    inline bool ReferencedByHasBeenSet() const { return m_referencedByHasBeenSet; }
    template<typename ReferencedByT = Aws::Map<Aws::String, Aws::String>>
    void SetReferencedBy(ReferencedByT&& value) { m_referencedByHasBeenSet = true; m_referencedBy = std::forward<ReferencedByT>(value); }
    template<typename ReferencedByT = Aws::Map<Aws::String, Aws::String>>
    ResourceNotFoundException& WithReferencedBy(ReferencedByT&& value) { SetReferencedBy(std::forward<ReferencedByT>(value)); return *this;}
    template<typename ReferencedByKeyT = Aws::String, typename ReferencedByValueT = Aws::String>
    ResourceNotFoundException& AddReferencedBy(ReferencedByKeyT&& key, ReferencedByValueT&& value) {
      m_referencedByHasBeenSet = true; m_referencedBy.emplace(std::forward<ReferencedByKeyT>(key), std::forward<ReferencedByValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_referencedBy;
    bool m_referencedByHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfigData
} // namespace Aws
