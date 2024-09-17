/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
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
namespace AppTest
{
namespace Model
{

  /**
   * <p>Specifies the mainframe action properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/MainframeActionProperties">AWS
   * API Reference</a></p>
   */
  class MainframeActionProperties
  {
  public:
    AWS_APPTEST_API MainframeActionProperties();
    AWS_APPTEST_API MainframeActionProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API MainframeActionProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The DMS task ARN of the mainframe action properties.</p>
     */
    inline const Aws::String& GetDmsTaskArn() const{ return m_dmsTaskArn; }
    inline bool DmsTaskArnHasBeenSet() const { return m_dmsTaskArnHasBeenSet; }
    inline void SetDmsTaskArn(const Aws::String& value) { m_dmsTaskArnHasBeenSet = true; m_dmsTaskArn = value; }
    inline void SetDmsTaskArn(Aws::String&& value) { m_dmsTaskArnHasBeenSet = true; m_dmsTaskArn = std::move(value); }
    inline void SetDmsTaskArn(const char* value) { m_dmsTaskArnHasBeenSet = true; m_dmsTaskArn.assign(value); }
    inline MainframeActionProperties& WithDmsTaskArn(const Aws::String& value) { SetDmsTaskArn(value); return *this;}
    inline MainframeActionProperties& WithDmsTaskArn(Aws::String&& value) { SetDmsTaskArn(std::move(value)); return *this;}
    inline MainframeActionProperties& WithDmsTaskArn(const char* value) { SetDmsTaskArn(value); return *this;}
    ///@}
  private:

    Aws::String m_dmsTaskArn;
    bool m_dmsTaskArnHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
