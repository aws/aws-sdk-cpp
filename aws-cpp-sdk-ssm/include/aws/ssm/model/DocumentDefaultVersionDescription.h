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
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>A default version of a document.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DocumentDefaultVersionDescription">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API DocumentDefaultVersionDescription
  {
  public:
    DocumentDefaultVersionDescription();
    DocumentDefaultVersionDescription(Aws::Utils::Json::JsonView jsonValue);
    DocumentDefaultVersionDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the document.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the document.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the document.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the document.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the document.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the document.</p>
     */
    inline DocumentDefaultVersionDescription& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the document.</p>
     */
    inline DocumentDefaultVersionDescription& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the document.</p>
     */
    inline DocumentDefaultVersionDescription& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The default version of the document.</p>
     */
    inline const Aws::String& GetDefaultVersion() const{ return m_defaultVersion; }

    /**
     * <p>The default version of the document.</p>
     */
    inline bool DefaultVersionHasBeenSet() const { return m_defaultVersionHasBeenSet; }

    /**
     * <p>The default version of the document.</p>
     */
    inline void SetDefaultVersion(const Aws::String& value) { m_defaultVersionHasBeenSet = true; m_defaultVersion = value; }

    /**
     * <p>The default version of the document.</p>
     */
    inline void SetDefaultVersion(Aws::String&& value) { m_defaultVersionHasBeenSet = true; m_defaultVersion = std::move(value); }

    /**
     * <p>The default version of the document.</p>
     */
    inline void SetDefaultVersion(const char* value) { m_defaultVersionHasBeenSet = true; m_defaultVersion.assign(value); }

    /**
     * <p>The default version of the document.</p>
     */
    inline DocumentDefaultVersionDescription& WithDefaultVersion(const Aws::String& value) { SetDefaultVersion(value); return *this;}

    /**
     * <p>The default version of the document.</p>
     */
    inline DocumentDefaultVersionDescription& WithDefaultVersion(Aws::String&& value) { SetDefaultVersion(std::move(value)); return *this;}

    /**
     * <p>The default version of the document.</p>
     */
    inline DocumentDefaultVersionDescription& WithDefaultVersion(const char* value) { SetDefaultVersion(value); return *this;}


    /**
     * <p>The default version of the artifact associated with the document.</p>
     */
    inline const Aws::String& GetDefaultVersionName() const{ return m_defaultVersionName; }

    /**
     * <p>The default version of the artifact associated with the document.</p>
     */
    inline bool DefaultVersionNameHasBeenSet() const { return m_defaultVersionNameHasBeenSet; }

    /**
     * <p>The default version of the artifact associated with the document.</p>
     */
    inline void SetDefaultVersionName(const Aws::String& value) { m_defaultVersionNameHasBeenSet = true; m_defaultVersionName = value; }

    /**
     * <p>The default version of the artifact associated with the document.</p>
     */
    inline void SetDefaultVersionName(Aws::String&& value) { m_defaultVersionNameHasBeenSet = true; m_defaultVersionName = std::move(value); }

    /**
     * <p>The default version of the artifact associated with the document.</p>
     */
    inline void SetDefaultVersionName(const char* value) { m_defaultVersionNameHasBeenSet = true; m_defaultVersionName.assign(value); }

    /**
     * <p>The default version of the artifact associated with the document.</p>
     */
    inline DocumentDefaultVersionDescription& WithDefaultVersionName(const Aws::String& value) { SetDefaultVersionName(value); return *this;}

    /**
     * <p>The default version of the artifact associated with the document.</p>
     */
    inline DocumentDefaultVersionDescription& WithDefaultVersionName(Aws::String&& value) { SetDefaultVersionName(std::move(value)); return *this;}

    /**
     * <p>The default version of the artifact associated with the document.</p>
     */
    inline DocumentDefaultVersionDescription& WithDefaultVersionName(const char* value) { SetDefaultVersionName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_defaultVersion;
    bool m_defaultVersionHasBeenSet;

    Aws::String m_defaultVersionName;
    bool m_defaultVersionNameHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
