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
   * <p>Information about the source where the association execution details are
   * stored.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/OutputSource">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API OutputSource
  {
  public:
    OutputSource();
    OutputSource(Aws::Utils::Json::JsonView jsonValue);
    OutputSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the output source, for example the URL of an Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetOutputSourceId() const{ return m_outputSourceId; }

    /**
     * <p>The ID of the output source, for example the URL of an Amazon S3 bucket.</p>
     */
    inline bool OutputSourceIdHasBeenSet() const { return m_outputSourceIdHasBeenSet; }

    /**
     * <p>The ID of the output source, for example the URL of an Amazon S3 bucket.</p>
     */
    inline void SetOutputSourceId(const Aws::String& value) { m_outputSourceIdHasBeenSet = true; m_outputSourceId = value; }

    /**
     * <p>The ID of the output source, for example the URL of an Amazon S3 bucket.</p>
     */
    inline void SetOutputSourceId(Aws::String&& value) { m_outputSourceIdHasBeenSet = true; m_outputSourceId = std::move(value); }

    /**
     * <p>The ID of the output source, for example the URL of an Amazon S3 bucket.</p>
     */
    inline void SetOutputSourceId(const char* value) { m_outputSourceIdHasBeenSet = true; m_outputSourceId.assign(value); }

    /**
     * <p>The ID of the output source, for example the URL of an Amazon S3 bucket.</p>
     */
    inline OutputSource& WithOutputSourceId(const Aws::String& value) { SetOutputSourceId(value); return *this;}

    /**
     * <p>The ID of the output source, for example the URL of an Amazon S3 bucket.</p>
     */
    inline OutputSource& WithOutputSourceId(Aws::String&& value) { SetOutputSourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the output source, for example the URL of an Amazon S3 bucket.</p>
     */
    inline OutputSource& WithOutputSourceId(const char* value) { SetOutputSourceId(value); return *this;}


    /**
     * <p>The type of source where the association execution details are stored, for
     * example, Amazon S3.</p>
     */
    inline const Aws::String& GetOutputSourceType() const{ return m_outputSourceType; }

    /**
     * <p>The type of source where the association execution details are stored, for
     * example, Amazon S3.</p>
     */
    inline bool OutputSourceTypeHasBeenSet() const { return m_outputSourceTypeHasBeenSet; }

    /**
     * <p>The type of source where the association execution details are stored, for
     * example, Amazon S3.</p>
     */
    inline void SetOutputSourceType(const Aws::String& value) { m_outputSourceTypeHasBeenSet = true; m_outputSourceType = value; }

    /**
     * <p>The type of source where the association execution details are stored, for
     * example, Amazon S3.</p>
     */
    inline void SetOutputSourceType(Aws::String&& value) { m_outputSourceTypeHasBeenSet = true; m_outputSourceType = std::move(value); }

    /**
     * <p>The type of source where the association execution details are stored, for
     * example, Amazon S3.</p>
     */
    inline void SetOutputSourceType(const char* value) { m_outputSourceTypeHasBeenSet = true; m_outputSourceType.assign(value); }

    /**
     * <p>The type of source where the association execution details are stored, for
     * example, Amazon S3.</p>
     */
    inline OutputSource& WithOutputSourceType(const Aws::String& value) { SetOutputSourceType(value); return *this;}

    /**
     * <p>The type of source where the association execution details are stored, for
     * example, Amazon S3.</p>
     */
    inline OutputSource& WithOutputSourceType(Aws::String&& value) { SetOutputSourceType(std::move(value)); return *this;}

    /**
     * <p>The type of source where the association execution details are stored, for
     * example, Amazon S3.</p>
     */
    inline OutputSource& WithOutputSourceType(const char* value) { SetOutputSourceType(value); return *this;}

  private:

    Aws::String m_outputSourceId;
    bool m_outputSourceIdHasBeenSet;

    Aws::String m_outputSourceType;
    bool m_outputSourceTypeHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
