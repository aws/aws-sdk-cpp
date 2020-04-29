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
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/LoggingLevel.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains logging options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/LoggingOptions">AWS
   * API Reference</a></p>
   */
  class AWS_IOTSITEWISE_API LoggingOptions
  {
  public:
    LoggingOptions();
    LoggingOptions(Aws::Utils::Json::JsonView jsonValue);
    LoggingOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The AWS IoT SiteWise logging verbosity level.</p>
     */
    inline const LoggingLevel& GetLevel() const{ return m_level; }

    /**
     * <p>The AWS IoT SiteWise logging verbosity level.</p>
     */
    inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }

    /**
     * <p>The AWS IoT SiteWise logging verbosity level.</p>
     */
    inline void SetLevel(const LoggingLevel& value) { m_levelHasBeenSet = true; m_level = value; }

    /**
     * <p>The AWS IoT SiteWise logging verbosity level.</p>
     */
    inline void SetLevel(LoggingLevel&& value) { m_levelHasBeenSet = true; m_level = std::move(value); }

    /**
     * <p>The AWS IoT SiteWise logging verbosity level.</p>
     */
    inline LoggingOptions& WithLevel(const LoggingLevel& value) { SetLevel(value); return *this;}

    /**
     * <p>The AWS IoT SiteWise logging verbosity level.</p>
     */
    inline LoggingOptions& WithLevel(LoggingLevel&& value) { SetLevel(std::move(value)); return *this;}

  private:

    LoggingLevel m_level;
    bool m_levelHasBeenSet;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
