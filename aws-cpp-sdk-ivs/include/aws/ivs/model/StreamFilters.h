/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/model/StreamHealth.h>
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
namespace IVS
{
namespace Model
{

  /**
   * <p>Object specifying the stream attribute on which to filter.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/StreamFilters">AWS
   * API Reference</a></p>
   */
  class AWS_IVS_API StreamFilters
  {
  public:
    StreamFilters();
    StreamFilters(Aws::Utils::Json::JsonView jsonValue);
    StreamFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The stream’s health.</p>
     */
    inline const StreamHealth& GetHealth() const{ return m_health; }

    /**
     * <p>The stream’s health.</p>
     */
    inline bool HealthHasBeenSet() const { return m_healthHasBeenSet; }

    /**
     * <p>The stream’s health.</p>
     */
    inline void SetHealth(const StreamHealth& value) { m_healthHasBeenSet = true; m_health = value; }

    /**
     * <p>The stream’s health.</p>
     */
    inline void SetHealth(StreamHealth&& value) { m_healthHasBeenSet = true; m_health = std::move(value); }

    /**
     * <p>The stream’s health.</p>
     */
    inline StreamFilters& WithHealth(const StreamHealth& value) { SetHealth(value); return *this;}

    /**
     * <p>The stream’s health.</p>
     */
    inline StreamFilters& WithHealth(StreamHealth&& value) { SetHealth(std::move(value)); return *this;}

  private:

    StreamHealth m_health;
    bool m_healthHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
