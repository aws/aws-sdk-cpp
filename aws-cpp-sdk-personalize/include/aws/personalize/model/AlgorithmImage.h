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
#include <aws/personalize/Personalize_EXPORTS.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>Describes an algorithm image.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/AlgorithmImage">AWS
   * API Reference</a></p>
   */
  class AWS_PERSONALIZE_API AlgorithmImage
  {
  public:
    AlgorithmImage();
    AlgorithmImage(Aws::Utils::Json::JsonView jsonValue);
    AlgorithmImage& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the algorithm image.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the algorithm image.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the algorithm image.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the algorithm image.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the algorithm image.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the algorithm image.</p>
     */
    inline AlgorithmImage& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the algorithm image.</p>
     */
    inline AlgorithmImage& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the algorithm image.</p>
     */
    inline AlgorithmImage& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The URI of the Docker container for the algorithm image.</p>
     */
    inline const Aws::String& GetDockerURI() const{ return m_dockerURI; }

    /**
     * <p>The URI of the Docker container for the algorithm image.</p>
     */
    inline bool DockerURIHasBeenSet() const { return m_dockerURIHasBeenSet; }

    /**
     * <p>The URI of the Docker container for the algorithm image.</p>
     */
    inline void SetDockerURI(const Aws::String& value) { m_dockerURIHasBeenSet = true; m_dockerURI = value; }

    /**
     * <p>The URI of the Docker container for the algorithm image.</p>
     */
    inline void SetDockerURI(Aws::String&& value) { m_dockerURIHasBeenSet = true; m_dockerURI = std::move(value); }

    /**
     * <p>The URI of the Docker container for the algorithm image.</p>
     */
    inline void SetDockerURI(const char* value) { m_dockerURIHasBeenSet = true; m_dockerURI.assign(value); }

    /**
     * <p>The URI of the Docker container for the algorithm image.</p>
     */
    inline AlgorithmImage& WithDockerURI(const Aws::String& value) { SetDockerURI(value); return *this;}

    /**
     * <p>The URI of the Docker container for the algorithm image.</p>
     */
    inline AlgorithmImage& WithDockerURI(Aws::String&& value) { SetDockerURI(std::move(value)); return *this;}

    /**
     * <p>The URI of the Docker container for the algorithm image.</p>
     */
    inline AlgorithmImage& WithDockerURI(const char* value) { SetDockerURI(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_dockerURI;
    bool m_dockerURIHasBeenSet;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
