/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanroomsml/model/TrainedModelExportReceiverMember.h>
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
   * <p>Information about the output of the trained model export job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/TrainedModelExportOutputConfiguration">AWS
   * API Reference</a></p>
   */
  class TrainedModelExportOutputConfiguration
  {
  public:
    AWS_CLEANROOMSML_API TrainedModelExportOutputConfiguration();
    AWS_CLEANROOMSML_API TrainedModelExportOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API TrainedModelExportOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The members that will received the exported trained model output.</p>
     */
    inline const Aws::Vector<TrainedModelExportReceiverMember>& GetMembers() const{ return m_members; }
    inline bool MembersHasBeenSet() const { return m_membersHasBeenSet; }
    inline void SetMembers(const Aws::Vector<TrainedModelExportReceiverMember>& value) { m_membersHasBeenSet = true; m_members = value; }
    inline void SetMembers(Aws::Vector<TrainedModelExportReceiverMember>&& value) { m_membersHasBeenSet = true; m_members = std::move(value); }
    inline TrainedModelExportOutputConfiguration& WithMembers(const Aws::Vector<TrainedModelExportReceiverMember>& value) { SetMembers(value); return *this;}
    inline TrainedModelExportOutputConfiguration& WithMembers(Aws::Vector<TrainedModelExportReceiverMember>&& value) { SetMembers(std::move(value)); return *this;}
    inline TrainedModelExportOutputConfiguration& AddMembers(const TrainedModelExportReceiverMember& value) { m_membersHasBeenSet = true; m_members.push_back(value); return *this; }
    inline TrainedModelExportOutputConfiguration& AddMembers(TrainedModelExportReceiverMember&& value) { m_membersHasBeenSet = true; m_members.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<TrainedModelExportReceiverMember> m_members;
    bool m_membersHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
