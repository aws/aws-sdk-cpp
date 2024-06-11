﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>The <code>SessionCommand</code> that runs the job.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/SessionCommand">AWS
   * API Reference</a></p>
   */
  class SessionCommand
  {
  public:
    AWS_GLUE_API SessionCommand();
    AWS_GLUE_API SessionCommand(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API SessionCommand& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the name of the SessionCommand. Can be 'glueetl' or
     * 'gluestreaming'.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline SessionCommand& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline SessionCommand& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline SessionCommand& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Python version. The Python version indicates the version
     * supported for jobs of type Spark.</p>
     */
    inline const Aws::String& GetPythonVersion() const{ return m_pythonVersion; }
    inline bool PythonVersionHasBeenSet() const { return m_pythonVersionHasBeenSet; }
    inline void SetPythonVersion(const Aws::String& value) { m_pythonVersionHasBeenSet = true; m_pythonVersion = value; }
    inline void SetPythonVersion(Aws::String&& value) { m_pythonVersionHasBeenSet = true; m_pythonVersion = std::move(value); }
    inline void SetPythonVersion(const char* value) { m_pythonVersionHasBeenSet = true; m_pythonVersion.assign(value); }
    inline SessionCommand& WithPythonVersion(const Aws::String& value) { SetPythonVersion(value); return *this;}
    inline SessionCommand& WithPythonVersion(Aws::String&& value) { SetPythonVersion(std::move(value)); return *this;}
    inline SessionCommand& WithPythonVersion(const char* value) { SetPythonVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_pythonVersion;
    bool m_pythonVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
