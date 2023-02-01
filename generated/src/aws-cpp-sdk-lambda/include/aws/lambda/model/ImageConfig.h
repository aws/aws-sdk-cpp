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
    AWS_LAMBDA_API ImageConfig();
    AWS_LAMBDA_API ImageConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API ImageConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the entry point to their application, which is typically the
     * location of the runtime executable.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEntryPoint() const{ return m_entryPoint; }

    /**
     * <p>Specifies the entry point to their application, which is typically the
     * location of the runtime executable.</p>
     */
    inline bool EntryPointHasBeenSet() const { return m_entryPointHasBeenSet; }

    /**
     * <p>Specifies the entry point to their application, which is typically the
     * location of the runtime executable.</p>
     */
    inline void SetEntryPoint(const Aws::Vector<Aws::String>& value) { m_entryPointHasBeenSet = true; m_entryPoint = value; }

    /**
     * <p>Specifies the entry point to their application, which is typically the
     * location of the runtime executable.</p>
     */
    inline void SetEntryPoint(Aws::Vector<Aws::String>&& value) { m_entryPointHasBeenSet = true; m_entryPoint = std::move(value); }

    /**
     * <p>Specifies the entry point to their application, which is typically the
     * location of the runtime executable.</p>
     */
    inline ImageConfig& WithEntryPoint(const Aws::Vector<Aws::String>& value) { SetEntryPoint(value); return *this;}

    /**
     * <p>Specifies the entry point to their application, which is typically the
     * location of the runtime executable.</p>
     */
    inline ImageConfig& WithEntryPoint(Aws::Vector<Aws::String>&& value) { SetEntryPoint(std::move(value)); return *this;}

    /**
     * <p>Specifies the entry point to their application, which is typically the
     * location of the runtime executable.</p>
     */
    inline ImageConfig& AddEntryPoint(const Aws::String& value) { m_entryPointHasBeenSet = true; m_entryPoint.push_back(value); return *this; }

    /**
     * <p>Specifies the entry point to their application, which is typically the
     * location of the runtime executable.</p>
     */
    inline ImageConfig& AddEntryPoint(Aws::String&& value) { m_entryPointHasBeenSet = true; m_entryPoint.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the entry point to their application, which is typically the
     * location of the runtime executable.</p>
     */
    inline ImageConfig& AddEntryPoint(const char* value) { m_entryPointHasBeenSet = true; m_entryPoint.push_back(value); return *this; }


    /**
     * <p>Specifies parameters that you want to pass in with ENTRYPOINT.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCommand() const{ return m_command; }

    /**
     * <p>Specifies parameters that you want to pass in with ENTRYPOINT.</p>
     */
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }

    /**
     * <p>Specifies parameters that you want to pass in with ENTRYPOINT.</p>
     */
    inline void SetCommand(const Aws::Vector<Aws::String>& value) { m_commandHasBeenSet = true; m_command = value; }

    /**
     * <p>Specifies parameters that you want to pass in with ENTRYPOINT.</p>
     */
    inline void SetCommand(Aws::Vector<Aws::String>&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }

    /**
     * <p>Specifies parameters that you want to pass in with ENTRYPOINT.</p>
     */
    inline ImageConfig& WithCommand(const Aws::Vector<Aws::String>& value) { SetCommand(value); return *this;}

    /**
     * <p>Specifies parameters that you want to pass in with ENTRYPOINT.</p>
     */
    inline ImageConfig& WithCommand(Aws::Vector<Aws::String>&& value) { SetCommand(std::move(value)); return *this;}

    /**
     * <p>Specifies parameters that you want to pass in with ENTRYPOINT.</p>
     */
    inline ImageConfig& AddCommand(const Aws::String& value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }

    /**
     * <p>Specifies parameters that you want to pass in with ENTRYPOINT.</p>
     */
    inline ImageConfig& AddCommand(Aws::String&& value) { m_commandHasBeenSet = true; m_command.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies parameters that you want to pass in with ENTRYPOINT.</p>
     */
    inline ImageConfig& AddCommand(const char* value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }


    /**
     * <p>Specifies the working directory.</p>
     */
    inline const Aws::String& GetWorkingDirectory() const{ return m_workingDirectory; }

    /**
     * <p>Specifies the working directory.</p>
     */
    inline bool WorkingDirectoryHasBeenSet() const { return m_workingDirectoryHasBeenSet; }

    /**
     * <p>Specifies the working directory.</p>
     */
    inline void SetWorkingDirectory(const Aws::String& value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory = value; }

    /**
     * <p>Specifies the working directory.</p>
     */
    inline void SetWorkingDirectory(Aws::String&& value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory = std::move(value); }

    /**
     * <p>Specifies the working directory.</p>
     */
    inline void SetWorkingDirectory(const char* value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory.assign(value); }

    /**
     * <p>Specifies the working directory.</p>
     */
    inline ImageConfig& WithWorkingDirectory(const Aws::String& value) { SetWorkingDirectory(value); return *this;}

    /**
     * <p>Specifies the working directory.</p>
     */
    inline ImageConfig& WithWorkingDirectory(Aws::String&& value) { SetWorkingDirectory(std::move(value)); return *this;}

    /**
     * <p>Specifies the working directory.</p>
     */
    inline ImageConfig& WithWorkingDirectory(const char* value) { SetWorkingDirectory(value); return *this;}

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
