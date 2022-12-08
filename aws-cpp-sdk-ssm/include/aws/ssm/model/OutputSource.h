/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class OutputSource
  {
  public:
    AWS_SSM_API OutputSource();
    AWS_SSM_API OutputSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API OutputSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the output source, for example the URL of an S3 bucket.</p>
     */
    inline const Aws::String& GetOutputSourceId() const{ return m_outputSourceId; }

    /**
     * <p>The ID of the output source, for example the URL of an S3 bucket.</p>
     */
    inline bool OutputSourceIdHasBeenSet() const { return m_outputSourceIdHasBeenSet; }

    /**
     * <p>The ID of the output source, for example the URL of an S3 bucket.</p>
     */
    inline void SetOutputSourceId(const Aws::String& value) { m_outputSourceIdHasBeenSet = true; m_outputSourceId = value; }

    /**
     * <p>The ID of the output source, for example the URL of an S3 bucket.</p>
     */
    inline void SetOutputSourceId(Aws::String&& value) { m_outputSourceIdHasBeenSet = true; m_outputSourceId = std::move(value); }

    /**
     * <p>The ID of the output source, for example the URL of an S3 bucket.</p>
     */
    inline void SetOutputSourceId(const char* value) { m_outputSourceIdHasBeenSet = true; m_outputSourceId.assign(value); }

    /**
     * <p>The ID of the output source, for example the URL of an S3 bucket.</p>
     */
    inline OutputSource& WithOutputSourceId(const Aws::String& value) { SetOutputSourceId(value); return *this;}

    /**
     * <p>The ID of the output source, for example the URL of an S3 bucket.</p>
     */
    inline OutputSource& WithOutputSourceId(Aws::String&& value) { SetOutputSourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the output source, for example the URL of an S3 bucket.</p>
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
    bool m_outputSourceIdHasBeenSet = false;

    Aws::String m_outputSourceType;
    bool m_outputSourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
