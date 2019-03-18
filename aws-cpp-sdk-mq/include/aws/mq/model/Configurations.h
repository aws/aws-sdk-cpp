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
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/mq/model/ConfigurationId.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace MQ
{
namespace Model
{

  /**
   * Broker configuration information<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/Configurations">AWS
   * API Reference</a></p>
   */
  class AWS_MQ_API Configurations
  {
  public:
    Configurations();
    Configurations(Aws::Utils::Json::JsonView jsonValue);
    Configurations& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The current configuration of the broker.
     */
    inline const ConfigurationId& GetCurrent() const{ return m_current; }

    /**
     * The current configuration of the broker.
     */
    inline bool CurrentHasBeenSet() const { return m_currentHasBeenSet; }

    /**
     * The current configuration of the broker.
     */
    inline void SetCurrent(const ConfigurationId& value) { m_currentHasBeenSet = true; m_current = value; }

    /**
     * The current configuration of the broker.
     */
    inline void SetCurrent(ConfigurationId&& value) { m_currentHasBeenSet = true; m_current = std::move(value); }

    /**
     * The current configuration of the broker.
     */
    inline Configurations& WithCurrent(const ConfigurationId& value) { SetCurrent(value); return *this;}

    /**
     * The current configuration of the broker.
     */
    inline Configurations& WithCurrent(ConfigurationId&& value) { SetCurrent(std::move(value)); return *this;}


    /**
     * The history of configurations applied to the broker.
     */
    inline const Aws::Vector<ConfigurationId>& GetHistory() const{ return m_history; }

    /**
     * The history of configurations applied to the broker.
     */
    inline bool HistoryHasBeenSet() const { return m_historyHasBeenSet; }

    /**
     * The history of configurations applied to the broker.
     */
    inline void SetHistory(const Aws::Vector<ConfigurationId>& value) { m_historyHasBeenSet = true; m_history = value; }

    /**
     * The history of configurations applied to the broker.
     */
    inline void SetHistory(Aws::Vector<ConfigurationId>&& value) { m_historyHasBeenSet = true; m_history = std::move(value); }

    /**
     * The history of configurations applied to the broker.
     */
    inline Configurations& WithHistory(const Aws::Vector<ConfigurationId>& value) { SetHistory(value); return *this;}

    /**
     * The history of configurations applied to the broker.
     */
    inline Configurations& WithHistory(Aws::Vector<ConfigurationId>&& value) { SetHistory(std::move(value)); return *this;}

    /**
     * The history of configurations applied to the broker.
     */
    inline Configurations& AddHistory(const ConfigurationId& value) { m_historyHasBeenSet = true; m_history.push_back(value); return *this; }

    /**
     * The history of configurations applied to the broker.
     */
    inline Configurations& AddHistory(ConfigurationId&& value) { m_historyHasBeenSet = true; m_history.push_back(std::move(value)); return *this; }


    /**
     * The pending configuration of the broker.
     */
    inline const ConfigurationId& GetPending() const{ return m_pending; }

    /**
     * The pending configuration of the broker.
     */
    inline bool PendingHasBeenSet() const { return m_pendingHasBeenSet; }

    /**
     * The pending configuration of the broker.
     */
    inline void SetPending(const ConfigurationId& value) { m_pendingHasBeenSet = true; m_pending = value; }

    /**
     * The pending configuration of the broker.
     */
    inline void SetPending(ConfigurationId&& value) { m_pendingHasBeenSet = true; m_pending = std::move(value); }

    /**
     * The pending configuration of the broker.
     */
    inline Configurations& WithPending(const ConfigurationId& value) { SetPending(value); return *this;}

    /**
     * The pending configuration of the broker.
     */
    inline Configurations& WithPending(ConfigurationId&& value) { SetPending(std::move(value)); return *this;}

  private:

    ConfigurationId m_current;
    bool m_currentHasBeenSet;

    Aws::Vector<ConfigurationId> m_history;
    bool m_historyHasBeenSet;

    ConfigurationId m_pending;
    bool m_pendingHasBeenSet;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
