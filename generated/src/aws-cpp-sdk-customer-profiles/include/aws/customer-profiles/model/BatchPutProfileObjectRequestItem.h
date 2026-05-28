/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CustomerProfiles {
namespace Model {

/**
 * <p>An item to add to the domain as part of a batch request.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/BatchPutProfileObjectRequestItem">AWS
 * API Reference</a></p>
 */
class BatchPutProfileObjectRequestItem {
 public:
  AWS_CUSTOMERPROFILES_API BatchPutProfileObjectRequestItem() = default;
  AWS_CUSTOMERPROFILES_API BatchPutProfileObjectRequestItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API BatchPutProfileObjectRequestItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A unique identifier for this item in the batch request. Used to correlate
   * items in the response.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  BatchPutProfileObjectRequestItem& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A string that is serialized from a JSON object.</p>
   */
  inline const Aws::String& GetObject() const { return m_object; }
  inline bool ObjectHasBeenSet() const { return m_objectHasBeenSet; }
  template <typename ObjectT = Aws::String>
  void SetObject(ObjectT&& value) {
    m_objectHasBeenSet = true;
    m_object = std::forward<ObjectT>(value);
  }
  template <typename ObjectT = Aws::String>
  BatchPutProfileObjectRequestItem& WithObject(ObjectT&& value) {
    SetObject(std::forward<ObjectT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_object;
  bool m_idHasBeenSet = false;
  bool m_objectHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
