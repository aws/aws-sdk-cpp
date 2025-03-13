/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Represents the output of a <a>ListPolicyAttachments</a> response
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchListPolicyAttachmentsResponse">AWS
   * API Reference</a></p>
   */
  class BatchListPolicyAttachmentsResponse
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchListPolicyAttachmentsResponse() = default;
    AWS_CLOUDDIRECTORY_API BatchListPolicyAttachmentsResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchListPolicyAttachmentsResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of <code>ObjectIdentifiers</code> to which the policy is attached.</p>
     */
    inline const Aws::Vector<Aws::String>& GetObjectIdentifiers() const { return m_objectIdentifiers; }
    inline bool ObjectIdentifiersHasBeenSet() const { return m_objectIdentifiersHasBeenSet; }
    template<typename ObjectIdentifiersT = Aws::Vector<Aws::String>>
    void SetObjectIdentifiers(ObjectIdentifiersT&& value) { m_objectIdentifiersHasBeenSet = true; m_objectIdentifiers = std::forward<ObjectIdentifiersT>(value); }
    template<typename ObjectIdentifiersT = Aws::Vector<Aws::String>>
    BatchListPolicyAttachmentsResponse& WithObjectIdentifiers(ObjectIdentifiersT&& value) { SetObjectIdentifiers(std::forward<ObjectIdentifiersT>(value)); return *this;}
    template<typename ObjectIdentifiersT = Aws::String>
    BatchListPolicyAttachmentsResponse& AddObjectIdentifiers(ObjectIdentifiersT&& value) { m_objectIdentifiersHasBeenSet = true; m_objectIdentifiers.emplace_back(std::forward<ObjectIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    BatchListPolicyAttachmentsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_objectIdentifiers;
    bool m_objectIdentifiersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
