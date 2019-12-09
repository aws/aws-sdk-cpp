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
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Secure Socket Layer (SSL) properties that apply when QuickSight connects to
   * your underlying data source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SslProperties">AWS
   * API Reference</a></p>
   */
  class AWS_QUICKSIGHT_API SslProperties
  {
  public:
    SslProperties();
    SslProperties(Aws::Utils::Json::JsonView jsonValue);
    SslProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A Boolean option to control whether SSL should be disabled.</p>
     */
    inline bool GetDisableSsl() const{ return m_disableSsl; }

    /**
     * <p>A Boolean option to control whether SSL should be disabled.</p>
     */
    inline bool DisableSslHasBeenSet() const { return m_disableSslHasBeenSet; }

    /**
     * <p>A Boolean option to control whether SSL should be disabled.</p>
     */
    inline void SetDisableSsl(bool value) { m_disableSslHasBeenSet = true; m_disableSsl = value; }

    /**
     * <p>A Boolean option to control whether SSL should be disabled.</p>
     */
    inline SslProperties& WithDisableSsl(bool value) { SetDisableSsl(value); return *this;}

  private:

    bool m_disableSsl;
    bool m_disableSslHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
