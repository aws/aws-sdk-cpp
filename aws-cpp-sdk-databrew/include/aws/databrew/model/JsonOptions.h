/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>

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
namespace GlueDataBrew
{
namespace Model
{

  /**
   * <p>Represents the JSON-specific options that define how input is to be
   * interpreted by Glue DataBrew.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/JsonOptions">AWS
   * API Reference</a></p>
   */
  class JsonOptions
  {
  public:
    AWS_GLUEDATABREW_API JsonOptions();
    AWS_GLUEDATABREW_API JsonOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API JsonOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A value that specifies whether JSON input contains embedded new line
     * characters.</p>
     */
    inline bool GetMultiLine() const{ return m_multiLine; }

    /**
     * <p>A value that specifies whether JSON input contains embedded new line
     * characters.</p>
     */
    inline bool MultiLineHasBeenSet() const { return m_multiLineHasBeenSet; }

    /**
     * <p>A value that specifies whether JSON input contains embedded new line
     * characters.</p>
     */
    inline void SetMultiLine(bool value) { m_multiLineHasBeenSet = true; m_multiLine = value; }

    /**
     * <p>A value that specifies whether JSON input contains embedded new line
     * characters.</p>
     */
    inline JsonOptions& WithMultiLine(bool value) { SetMultiLine(value); return *this;}

  private:

    bool m_multiLine;
    bool m_multiLineHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
