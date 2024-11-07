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
    AWS_CLEANROOMSML_API InferenceOutputConfiguration();
    AWS_CLEANROOMSML_API InferenceOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API InferenceOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The MIME type used to specify the output data.</p>
     */
    inline const Aws::String& GetAccept() const{ return m_accept; }
    inline bool AcceptHasBeenSet() const { return m_acceptHasBeenSet; }
    inline void SetAccept(const Aws::String& value) { m_acceptHasBeenSet = true; m_accept = value; }
    inline void SetAccept(Aws::String&& value) { m_acceptHasBeenSet = true; m_accept = std::move(value); }
    inline void SetAccept(const char* value) { m_acceptHasBeenSet = true; m_accept.assign(value); }
    inline InferenceOutputConfiguration& WithAccept(const Aws::String& value) { SetAccept(value); return *this;}
    inline InferenceOutputConfiguration& WithAccept(Aws::String&& value) { SetAccept(std::move(value)); return *this;}
    inline InferenceOutputConfiguration& WithAccept(const char* value) { SetAccept(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the members that can receive inference output.</p>
     */
    inline const Aws::Vector<InferenceReceiverMember>& GetMembers() const{ return m_members; }
    inline bool MembersHasBeenSet() const { return m_membersHasBeenSet; }
    inline void SetMembers(const Aws::Vector<InferenceReceiverMember>& value) { m_membersHasBeenSet = true; m_members = value; }
    inline void SetMembers(Aws::Vector<InferenceReceiverMember>&& value) { m_membersHasBeenSet = true; m_members = std::move(value); }
    inline InferenceOutputConfiguration& WithMembers(const Aws::Vector<InferenceReceiverMember>& value) { SetMembers(value); return *this;}
    inline InferenceOutputConfiguration& WithMembers(Aws::Vector<InferenceReceiverMember>&& value) { SetMembers(std::move(value)); return *this;}
    inline InferenceOutputConfiguration& AddMembers(const InferenceReceiverMember& value) { m_membersHasBeenSet = true; m_members.push_back(value); return *this; }
    inline InferenceOutputConfiguration& AddMembers(InferenceReceiverMember&& value) { m_membersHasBeenSet = true; m_members.push_back(std::move(value)); return *this; }
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
