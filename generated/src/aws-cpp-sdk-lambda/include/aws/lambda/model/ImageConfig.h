/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
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
namespace Lambda
{
namespace Model
{

  /**
   * <p>Configuration values that override the container image Dockerfile settings.
   * For more information, see <a
   * href="https://docs.aws.amazon.com/lambda/latest/dg/images-create.html#images-parms">Container
   * image settings</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ImageConfig">AWS
   * API Reference</a></p>
   */
  class ImageConfig
  {
  public:
    AWS_LAMBDA_API ImageConfig() = default;
    AWS_LAMBDA_API ImageConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API ImageConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the entry point to their application, which is typically the
     * location of the runtime executable.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEntryPoint() const { return m_entryPoint; }
    inline bool EntryPointHasBeenSet() const { return m_entryPointHasBeenSet; }
    template<typename EntryPointT = Aws::Vector<Aws::String>>
    void SetEntryPoint(EntryPointT&& value) { m_entryPointHasBeenSet = true; m_entryPoint = std::forward<EntryPointT>(value); }
    template<typename EntryPointT = Aws::Vector<Aws::String>>
    ImageConfig& WithEntryPoint(EntryPointT&& value) { SetEntryPoint(std::forward<EntryPointT>(value)); return *this;}
    template<typename EntryPointT = Aws::String>
    ImageConfig& AddEntryPoint(EntryPointT&& value) { m_entryPointHasBeenSet = true; m_entryPoint.emplace_back(std::forward<EntryPointT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies parameters that you want to pass in with ENTRYPOINT.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCommand() const { return m_command; }
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
    template<typename CommandT = Aws::Vector<Aws::String>>
    void SetCommand(CommandT&& value) { m_commandHasBeenSet = true; m_command = std::forward<CommandT>(value); }
    template<typename CommandT = Aws::Vector<Aws::String>>
    ImageConfig& WithCommand(CommandT&& value) { SetCommand(std::forward<CommandT>(value)); return *this;}
    template<typename CommandT = Aws::String>
    ImageConfig& AddCommand(CommandT&& value) { m_commandHasBeenSet = true; m_command.emplace_back(std::forward<CommandT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the working directory.</p>
     */
    inline const Aws::String& GetWorkingDirectory() const { return m_workingDirectory; }
    inline bool WorkingDirectoryHasBeenSet() const { return m_workingDirectoryHasBeenSet; }
    template<typename WorkingDirectoryT = Aws::String>
    void SetWorkingDirectory(WorkingDirectoryT&& value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory = std::forward<WorkingDirectoryT>(value); }
    template<typename WorkingDirectoryT = Aws::String>
    ImageConfig& WithWorkingDirectory(WorkingDirectoryT&& value) { SetWorkingDirectory(std::forward<WorkingDirectoryT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_entryPoint;
    bool m_entryPointHasBeenSet = false;

    Aws::Vector<Aws::String> m_command;
    bool m_commandHasBeenSet = false;

    Aws::String m_workingDirectory;
    bool m_workingDirectoryHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
