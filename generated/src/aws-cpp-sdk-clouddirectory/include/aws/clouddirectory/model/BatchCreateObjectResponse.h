/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>Represents the output of a <a>CreateObject</a> response
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchCreateObjectResponse">AWS
   * API Reference</a></p>
   */
  class BatchCreateObjectResponse
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchCreateObjectResponse() = default;
    AWS_CLOUDDIRECTORY_API BatchCreateObjectResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchCreateObjectResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID that is associated with the object.</p>
     */
    inline const Aws::String& GetObjectIdentifier() const { return m_objectIdentifier; }
    inline bool ObjectIdentifierHasBeenSet() const { return m_objectIdentifierHasBeenSet; }
    template<typename ObjectIdentifierT = Aws::String>
    void SetObjectIdentifier(ObjectIdentifierT&& value) { m_objectIdentifierHasBeenSet = true; m_objectIdentifier = std::forward<ObjectIdentifierT>(value); }
    template<typename ObjectIdentifierT = Aws::String>
    BatchCreateObjectResponse& WithObjectIdentifier(ObjectIdentifierT&& value) { SetObjectIdentifier(std::forward<ObjectIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_objectIdentifier;
    bool m_objectIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
