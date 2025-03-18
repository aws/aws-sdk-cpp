/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ProtectedJobOutputConfigurationOutput.h>
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
   * <p>The output configuration for a protected job result.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ProtectedJobResultConfigurationOutput">AWS
   * API Reference</a></p>
   */
  class ProtectedJobResultConfigurationOutput
  {
  public:
    AWS_CLEANROOMS_API ProtectedJobResultConfigurationOutput();
    AWS_CLEANROOMS_API ProtectedJobResultConfigurationOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ProtectedJobResultConfigurationOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The output configuration.</p>
     */
    inline const ProtectedJobOutputConfigurationOutput& GetOutputConfiguration() const{ return m_outputConfiguration; }
    inline bool OutputConfigurationHasBeenSet() const { return m_outputConfigurationHasBeenSet; }
    inline void SetOutputConfiguration(const ProtectedJobOutputConfigurationOutput& value) { m_outputConfigurationHasBeenSet = true; m_outputConfiguration = value; }
    inline void SetOutputConfiguration(ProtectedJobOutputConfigurationOutput&& value) { m_outputConfigurationHasBeenSet = true; m_outputConfiguration = std::move(value); }
    inline ProtectedJobResultConfigurationOutput& WithOutputConfiguration(const ProtectedJobOutputConfigurationOutput& value) { SetOutputConfiguration(value); return *this;}
    inline ProtectedJobResultConfigurationOutput& WithOutputConfiguration(ProtectedJobOutputConfigurationOutput&& value) { SetOutputConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    ProtectedJobOutputConfigurationOutput m_outputConfiguration;
    bool m_outputConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
