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
#include <aws/mq/model/EngineType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mq/model/EngineVersion.h>
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
   * Types of broker engines.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/BrokerEngineType">AWS
   * API Reference</a></p>
   */
  class AWS_MQ_API BrokerEngineType
  {
  public:
    BrokerEngineType();
    BrokerEngineType(Aws::Utils::Json::JsonView jsonValue);
    BrokerEngineType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The type of broker engine.
     */
    inline const EngineType& GetEngineType() const{ return m_engineType; }

    /**
     * The type of broker engine.
     */
    inline bool EngineTypeHasBeenSet() const { return m_engineTypeHasBeenSet; }

    /**
     * The type of broker engine.
     */
    inline void SetEngineType(const EngineType& value) { m_engineTypeHasBeenSet = true; m_engineType = value; }

    /**
     * The type of broker engine.
     */
    inline void SetEngineType(EngineType&& value) { m_engineTypeHasBeenSet = true; m_engineType = std::move(value); }

    /**
     * The type of broker engine.
     */
    inline BrokerEngineType& WithEngineType(const EngineType& value) { SetEngineType(value); return *this;}

    /**
     * The type of broker engine.
     */
    inline BrokerEngineType& WithEngineType(EngineType&& value) { SetEngineType(std::move(value)); return *this;}


    /**
     * The list of engine versions.
     */
    inline const Aws::Vector<EngineVersion>& GetEngineVersions() const{ return m_engineVersions; }

    /**
     * The list of engine versions.
     */
    inline bool EngineVersionsHasBeenSet() const { return m_engineVersionsHasBeenSet; }

    /**
     * The list of engine versions.
     */
    inline void SetEngineVersions(const Aws::Vector<EngineVersion>& value) { m_engineVersionsHasBeenSet = true; m_engineVersions = value; }

    /**
     * The list of engine versions.
     */
    inline void SetEngineVersions(Aws::Vector<EngineVersion>&& value) { m_engineVersionsHasBeenSet = true; m_engineVersions = std::move(value); }

    /**
     * The list of engine versions.
     */
    inline BrokerEngineType& WithEngineVersions(const Aws::Vector<EngineVersion>& value) { SetEngineVersions(value); return *this;}

    /**
     * The list of engine versions.
     */
    inline BrokerEngineType& WithEngineVersions(Aws::Vector<EngineVersion>&& value) { SetEngineVersions(std::move(value)); return *this;}

    /**
     * The list of engine versions.
     */
    inline BrokerEngineType& AddEngineVersions(const EngineVersion& value) { m_engineVersionsHasBeenSet = true; m_engineVersions.push_back(value); return *this; }

    /**
     * The list of engine versions.
     */
    inline BrokerEngineType& AddEngineVersions(EngineVersion&& value) { m_engineVersionsHasBeenSet = true; m_engineVersions.push_back(std::move(value)); return *this; }

  private:

    EngineType m_engineType;
    bool m_engineTypeHasBeenSet;

    Aws::Vector<EngineVersion> m_engineVersions;
    bool m_engineVersionsHasBeenSet;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
