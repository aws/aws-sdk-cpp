/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ProtectedJobOutputConfigurationInput.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>The protected job result configuration input.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ProtectedJobResultConfigurationInput">AWS
   * API Reference</a></p>
   */
  class ProtectedJobResultConfigurationInput
  {
  public:
    AWS_CLEANROOMS_API ProtectedJobResultConfigurationInput();
    AWS_CLEANROOMS_API ProtectedJobResultConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ProtectedJobResultConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The output configuration for a protected job result.</p>
     */
    inline const ProtectedJobOutputConfigurationInput& GetOutputConfiguration() const{ return m_outputConfiguration; }
    inline bool OutputConfigurationHasBeenSet() const { return m_outputConfigurationHasBeenSet; }
    inline void SetOutputConfiguration(const ProtectedJobOutputConfigurationInput& value) { m_outputConfigurationHasBeenSet = true; m_outputConfiguration = value; }
    inline void SetOutputConfiguration(ProtectedJobOutputConfigurationInput&& value) { m_outputConfigurationHasBeenSet = true; m_outputConfiguration = std::move(value); }
    inline ProtectedJobResultConfigurationInput& WithOutputConfiguration(const ProtectedJobOutputConfigurationInput& value) { SetOutputConfiguration(value); return *this;}
    inline ProtectedJobResultConfigurationInput& WithOutputConfiguration(ProtectedJobOutputConfigurationInput&& value) { SetOutputConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    ProtectedJobOutputConfigurationInput m_outputConfiguration;
    bool m_outputConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
