/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class AWS_GLUE_API GetDataflowGraphRequest : public GlueRequest
  {
  public:
    GetDataflowGraphRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDataflowGraph"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Python script to transform.</p>
     */
    inline const Aws::String& GetPythonScript() const{ return m_pythonScript; }

    /**
     * <p>The Python script to transform.</p>
     */
    inline bool PythonScriptHasBeenSet() const { return m_pythonScriptHasBeenSet; }

    /**
     * <p>The Python script to transform.</p>
     */
    inline void SetPythonScript(const Aws::String& value) { m_pythonScriptHasBeenSet = true; m_pythonScript = value; }

    /**
     * <p>The Python script to transform.</p>
     */
    inline void SetPythonScript(Aws::String&& value) { m_pythonScriptHasBeenSet = true; m_pythonScript = std::move(value); }

    /**
     * <p>The Python script to transform.</p>
     */
    inline void SetPythonScript(const char* value) { m_pythonScriptHasBeenSet = true; m_pythonScript.assign(value); }

    /**
     * <p>The Python script to transform.</p>
     */
    inline GetDataflowGraphRequest& WithPythonScript(const Aws::String& value) { SetPythonScript(value); return *this;}

    /**
     * <p>The Python script to transform.</p>
     */
    inline GetDataflowGraphRequest& WithPythonScript(Aws::String&& value) { SetPythonScript(std::move(value)); return *this;}

    /**
     * <p>The Python script to transform.</p>
     */
    inline GetDataflowGraphRequest& WithPythonScript(const char* value) { SetPythonScript(value); return *this;}

  private:

    Aws::String m_pythonScript;
    bool m_pythonScriptHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
