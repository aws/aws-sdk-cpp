/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafkaconnect/model/CustomPluginState.h>
#include <aws/kafkaconnect/model/CustomPluginRevisionSummary.h>
#include <aws/kafkaconnect/model/StateDescription.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace KafkaConnect
{
namespace Model
{
  class DescribeCustomPluginResult
  {
  public:
    AWS_KAFKACONNECT_API DescribeCustomPluginResult();
    AWS_KAFKACONNECT_API DescribeCustomPluginResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKACONNECT_API DescribeCustomPluginResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The time that the custom plugin was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time that the custom plugin was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time that the custom plugin was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time that the custom plugin was created.</p>
     */
    inline DescribeCustomPluginResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time that the custom plugin was created.</p>
     */
    inline DescribeCustomPluginResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the custom plugin.</p>
     */
    inline const Aws::String& GetCustomPluginArn() const{ return m_customPluginArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom plugin.</p>
     */
    inline void SetCustomPluginArn(const Aws::String& value) { m_customPluginArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom plugin.</p>
     */
    inline void SetCustomPluginArn(Aws::String&& value) { m_customPluginArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom plugin.</p>
     */
    inline void SetCustomPluginArn(const char* value) { m_customPluginArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom plugin.</p>
     */
    inline DescribeCustomPluginResult& WithCustomPluginArn(const Aws::String& value) { SetCustomPluginArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the custom plugin.</p>
     */
    inline DescribeCustomPluginResult& WithCustomPluginArn(Aws::String&& value) { SetCustomPluginArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the custom plugin.</p>
     */
    inline DescribeCustomPluginResult& WithCustomPluginArn(const char* value) { SetCustomPluginArn(value); return *this;}


    /**
     * <p>The state of the custom plugin.</p>
     */
    inline const CustomPluginState& GetCustomPluginState() const{ return m_customPluginState; }

    /**
     * <p>The state of the custom plugin.</p>
     */
    inline void SetCustomPluginState(const CustomPluginState& value) { m_customPluginState = value; }

    /**
     * <p>The state of the custom plugin.</p>
     */
    inline void SetCustomPluginState(CustomPluginState&& value) { m_customPluginState = std::move(value); }

    /**
     * <p>The state of the custom plugin.</p>
     */
    inline DescribeCustomPluginResult& WithCustomPluginState(const CustomPluginState& value) { SetCustomPluginState(value); return *this;}

    /**
     * <p>The state of the custom plugin.</p>
     */
    inline DescribeCustomPluginResult& WithCustomPluginState(CustomPluginState&& value) { SetCustomPluginState(std::move(value)); return *this;}


    /**
     * <p>The description of the custom plugin.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the custom plugin.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the custom plugin.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the custom plugin.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the custom plugin.</p>
     */
    inline DescribeCustomPluginResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the custom plugin.</p>
     */
    inline DescribeCustomPluginResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the custom plugin.</p>
     */
    inline DescribeCustomPluginResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The latest successfully created revision of the custom plugin. If there are
     * no successfully created revisions, this field will be absent.</p>
     */
    inline const CustomPluginRevisionSummary& GetLatestRevision() const{ return m_latestRevision; }

    /**
     * <p>The latest successfully created revision of the custom plugin. If there are
     * no successfully created revisions, this field will be absent.</p>
     */
    inline void SetLatestRevision(const CustomPluginRevisionSummary& value) { m_latestRevision = value; }

    /**
     * <p>The latest successfully created revision of the custom plugin. If there are
     * no successfully created revisions, this field will be absent.</p>
     */
    inline void SetLatestRevision(CustomPluginRevisionSummary&& value) { m_latestRevision = std::move(value); }

    /**
     * <p>The latest successfully created revision of the custom plugin. If there are
     * no successfully created revisions, this field will be absent.</p>
     */
    inline DescribeCustomPluginResult& WithLatestRevision(const CustomPluginRevisionSummary& value) { SetLatestRevision(value); return *this;}

    /**
     * <p>The latest successfully created revision of the custom plugin. If there are
     * no successfully created revisions, this field will be absent.</p>
     */
    inline DescribeCustomPluginResult& WithLatestRevision(CustomPluginRevisionSummary&& value) { SetLatestRevision(std::move(value)); return *this;}


    /**
     * <p>The name of the custom plugin.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the custom plugin.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the custom plugin.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the custom plugin.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the custom plugin.</p>
     */
    inline DescribeCustomPluginResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the custom plugin.</p>
     */
    inline DescribeCustomPluginResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom plugin.</p>
     */
    inline DescribeCustomPluginResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Details about the state of a custom plugin.</p>
     */
    inline const StateDescription& GetStateDescription() const{ return m_stateDescription; }

    /**
     * <p>Details about the state of a custom plugin.</p>
     */
    inline void SetStateDescription(const StateDescription& value) { m_stateDescription = value; }

    /**
     * <p>Details about the state of a custom plugin.</p>
     */
    inline void SetStateDescription(StateDescription&& value) { m_stateDescription = std::move(value); }

    /**
     * <p>Details about the state of a custom plugin.</p>
     */
    inline DescribeCustomPluginResult& WithStateDescription(const StateDescription& value) { SetStateDescription(value); return *this;}

    /**
     * <p>Details about the state of a custom plugin.</p>
     */
    inline DescribeCustomPluginResult& WithStateDescription(StateDescription&& value) { SetStateDescription(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_customPluginArn;

    CustomPluginState m_customPluginState;

    Aws::String m_description;

    CustomPluginRevisionSummary m_latestRevision;

    Aws::String m_name;

    StateDescription m_stateDescription;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
