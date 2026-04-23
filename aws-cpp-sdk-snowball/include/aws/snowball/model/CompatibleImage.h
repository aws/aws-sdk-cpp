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
#include <aws/snowball/Snowball_EXPORTS.h>
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
namespace Snowball
{
namespace Model
{

  /**
   * <p>A JSON-formatted object that describes a compatible Amazon Machine Image
   * (AMI). For more information on compatible AMIs, see <a
   * href="http://docs.aws.amazon.com/snowball/latest/developer-guide/using-ec2.html">Using
   * Amazon EC2 Compute Instances</a> in the <i>AWS Snowball Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/CompatibleImage">AWS
   * API Reference</a></p>
   */
  class AWS_SNOWBALL_API CompatibleImage
  {
  public:
    CompatibleImage();
    CompatibleImage(Aws::Utils::Json::JsonView jsonValue);
    CompatibleImage& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for an individual Snowball Edge AMI.</p>
     */
    inline const Aws::String& GetAmiId() const{ return m_amiId; }

    /**
     * <p>The unique identifier for an individual Snowball Edge AMI.</p>
     */
    inline bool AmiIdHasBeenSet() const { return m_amiIdHasBeenSet; }

    /**
     * <p>The unique identifier for an individual Snowball Edge AMI.</p>
     */
    inline void SetAmiId(const Aws::String& value) { m_amiIdHasBeenSet = true; m_amiId = value; }

    /**
     * <p>The unique identifier for an individual Snowball Edge AMI.</p>
     */
    inline void SetAmiId(Aws::String&& value) { m_amiIdHasBeenSet = true; m_amiId = std::move(value); }

    /**
     * <p>The unique identifier for an individual Snowball Edge AMI.</p>
     */
    inline void SetAmiId(const char* value) { m_amiIdHasBeenSet = true; m_amiId.assign(value); }

    /**
     * <p>The unique identifier for an individual Snowball Edge AMI.</p>
     */
    inline CompatibleImage& WithAmiId(const Aws::String& value) { SetAmiId(value); return *this;}

    /**
     * <p>The unique identifier for an individual Snowball Edge AMI.</p>
     */
    inline CompatibleImage& WithAmiId(Aws::String&& value) { SetAmiId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for an individual Snowball Edge AMI.</p>
     */
    inline CompatibleImage& WithAmiId(const char* value) { SetAmiId(value); return *this;}


    /**
     * <p>The optional name of a compatible image.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The optional name of a compatible image.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The optional name of a compatible image.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The optional name of a compatible image.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The optional name of a compatible image.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The optional name of a compatible image.</p>
     */
    inline CompatibleImage& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The optional name of a compatible image.</p>
     */
    inline CompatibleImage& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The optional name of a compatible image.</p>
     */
    inline CompatibleImage& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_amiId;
    bool m_amiIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
