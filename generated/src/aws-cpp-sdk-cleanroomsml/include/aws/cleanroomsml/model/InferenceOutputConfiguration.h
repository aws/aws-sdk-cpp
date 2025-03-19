/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanroomsml/model/InferenceReceiverMember.h>
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
namespace CleanRoomsML
{
namespace Model
{

  /**
   * <p>Configuration information about how the inference output is
   * stored.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/InferenceOutputConfiguration">AWS
   * API Reference</a></p>
   */
  class InferenceOutputConfiguration
  {
  public:
    AWS_CLEANROOMSML_API InferenceOutputConfiguration() = default;
    AWS_CLEANROOMSML_API InferenceOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API InferenceOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The MIME type used to specify the output data.</p>
     */
    inline const Aws::String& GetAccept() const { return m_accept; }
    inline bool AcceptHasBeenSet() const { return m_acceptHasBeenSet; }
    template<typename AcceptT = Aws::String>
    void SetAccept(AcceptT&& value) { m_acceptHasBeenSet = true; m_accept = std::forward<AcceptT>(value); }
    template<typename AcceptT = Aws::String>
    InferenceOutputConfiguration& WithAccept(AcceptT&& value) { SetAccept(std::forward<AcceptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the members that can receive inference output.</p>
     */
    inline const Aws::Vector<InferenceReceiverMember>& GetMembers() const { return m_members; }
    inline bool MembersHasBeenSet() const { return m_membersHasBeenSet; }
    template<typename MembersT = Aws::Vector<InferenceReceiverMember>>
    void SetMembers(MembersT&& value) { m_membersHasBeenSet = true; m_members = std::forward<MembersT>(value); }
    template<typename MembersT = Aws::Vector<InferenceReceiverMember>>
    InferenceOutputConfiguration& WithMembers(MembersT&& value) { SetMembers(std::forward<MembersT>(value)); return *this;}
    template<typename MembersT = InferenceReceiverMember>
    InferenceOutputConfiguration& AddMembers(MembersT&& value) { m_membersHasBeenSet = true; m_members.emplace_back(std::forward<MembersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_accept;
    bool m_acceptHasBeenSet = false;

    Aws::Vector<InferenceReceiverMember> m_members;
    bool m_membersHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
