/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Pipes
{
namespace Model
{

  /**
   * <p>The parameters for using an EventBridge event bus as a target.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/PipeTargetEventBridgeEventBusParameters">AWS
   * API Reference</a></p>
   */
  class PipeTargetEventBridgeEventBusParameters
  {
  public:
    AWS_PIPES_API PipeTargetEventBridgeEventBusParameters();
    AWS_PIPES_API PipeTargetEventBridgeEventBusParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API PipeTargetEventBridgeEventBusParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A free-form string, with a maximum of 128 characters, used to decide what
     * fields to expect in the event detail.</p>
     */
    inline const Aws::String& GetDetailType() const{ return m_detailType; }

    /**
     * <p>A free-form string, with a maximum of 128 characters, used to decide what
     * fields to expect in the event detail.</p>
     */
    inline bool DetailTypeHasBeenSet() const { return m_detailTypeHasBeenSet; }

    /**
     * <p>A free-form string, with a maximum of 128 characters, used to decide what
     * fields to expect in the event detail.</p>
     */
    inline void SetDetailType(const Aws::String& value) { m_detailTypeHasBeenSet = true; m_detailType = value; }

    /**
     * <p>A free-form string, with a maximum of 128 characters, used to decide what
     * fields to expect in the event detail.</p>
     */
    inline void SetDetailType(Aws::String&& value) { m_detailTypeHasBeenSet = true; m_detailType = std::move(value); }

    /**
     * <p>A free-form string, with a maximum of 128 characters, used to decide what
     * fields to expect in the event detail.</p>
     */
    inline void SetDetailType(const char* value) { m_detailTypeHasBeenSet = true; m_detailType.assign(value); }

    /**
     * <p>A free-form string, with a maximum of 128 characters, used to decide what
     * fields to expect in the event detail.</p>
     */
    inline PipeTargetEventBridgeEventBusParameters& WithDetailType(const Aws::String& value) { SetDetailType(value); return *this;}

    /**
     * <p>A free-form string, with a maximum of 128 characters, used to decide what
     * fields to expect in the event detail.</p>
     */
    inline PipeTargetEventBridgeEventBusParameters& WithDetailType(Aws::String&& value) { SetDetailType(std::move(value)); return *this;}

    /**
     * <p>A free-form string, with a maximum of 128 characters, used to decide what
     * fields to expect in the event detail.</p>
     */
    inline PipeTargetEventBridgeEventBusParameters& WithDetailType(const char* value) { SetDetailType(value); return *this;}


    /**
     * <p>The URL subdomain of the endpoint. For example, if the URL for Endpoint is
     * https://abcde.veo.endpoints.event.amazonaws.com, then the EndpointId is
     * <code>abcde.veo</code>.</p>  <p>When using Java, you must include
     * <code>auth-crt</code> on the class path.</p> 
     */
    inline const Aws::String& GetEndpointId() const{ return m_endpointId; }

    /**
     * <p>The URL subdomain of the endpoint. For example, if the URL for Endpoint is
     * https://abcde.veo.endpoints.event.amazonaws.com, then the EndpointId is
     * <code>abcde.veo</code>.</p>  <p>When using Java, you must include
     * <code>auth-crt</code> on the class path.</p> 
     */
    inline bool EndpointIdHasBeenSet() const { return m_endpointIdHasBeenSet; }

    /**
     * <p>The URL subdomain of the endpoint. For example, if the URL for Endpoint is
     * https://abcde.veo.endpoints.event.amazonaws.com, then the EndpointId is
     * <code>abcde.veo</code>.</p>  <p>When using Java, you must include
     * <code>auth-crt</code> on the class path.</p> 
     */
    inline void SetEndpointId(const Aws::String& value) { m_endpointIdHasBeenSet = true; m_endpointId = value; }

    /**
     * <p>The URL subdomain of the endpoint. For example, if the URL for Endpoint is
     * https://abcde.veo.endpoints.event.amazonaws.com, then the EndpointId is
     * <code>abcde.veo</code>.</p>  <p>When using Java, you must include
     * <code>auth-crt</code> on the class path.</p> 
     */
    inline void SetEndpointId(Aws::String&& value) { m_endpointIdHasBeenSet = true; m_endpointId = std::move(value); }

    /**
     * <p>The URL subdomain of the endpoint. For example, if the URL for Endpoint is
     * https://abcde.veo.endpoints.event.amazonaws.com, then the EndpointId is
     * <code>abcde.veo</code>.</p>  <p>When using Java, you must include
     * <code>auth-crt</code> on the class path.</p> 
     */
    inline void SetEndpointId(const char* value) { m_endpointIdHasBeenSet = true; m_endpointId.assign(value); }

    /**
     * <p>The URL subdomain of the endpoint. For example, if the URL for Endpoint is
     * https://abcde.veo.endpoints.event.amazonaws.com, then the EndpointId is
     * <code>abcde.veo</code>.</p>  <p>When using Java, you must include
     * <code>auth-crt</code> on the class path.</p> 
     */
    inline PipeTargetEventBridgeEventBusParameters& WithEndpointId(const Aws::String& value) { SetEndpointId(value); return *this;}

    /**
     * <p>The URL subdomain of the endpoint. For example, if the URL for Endpoint is
     * https://abcde.veo.endpoints.event.amazonaws.com, then the EndpointId is
     * <code>abcde.veo</code>.</p>  <p>When using Java, you must include
     * <code>auth-crt</code> on the class path.</p> 
     */
    inline PipeTargetEventBridgeEventBusParameters& WithEndpointId(Aws::String&& value) { SetEndpointId(std::move(value)); return *this;}

    /**
     * <p>The URL subdomain of the endpoint. For example, if the URL for Endpoint is
     * https://abcde.veo.endpoints.event.amazonaws.com, then the EndpointId is
     * <code>abcde.veo</code>.</p>  <p>When using Java, you must include
     * <code>auth-crt</code> on the class path.</p> 
     */
    inline PipeTargetEventBridgeEventBusParameters& WithEndpointId(const char* value) { SetEndpointId(value); return *this;}


    /**
     * <p>Amazon Web Services resources, identified by Amazon Resource Name (ARN),
     * which the event primarily concerns. Any number, including zero, may be
     * present.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResources() const{ return m_resources; }

    /**
     * <p>Amazon Web Services resources, identified by Amazon Resource Name (ARN),
     * which the event primarily concerns. Any number, including zero, may be
     * present.</p>
     */
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }

    /**
     * <p>Amazon Web Services resources, identified by Amazon Resource Name (ARN),
     * which the event primarily concerns. Any number, including zero, may be
     * present.</p>
     */
    inline void SetResources(const Aws::Vector<Aws::String>& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * <p>Amazon Web Services resources, identified by Amazon Resource Name (ARN),
     * which the event primarily concerns. Any number, including zero, may be
     * present.</p>
     */
    inline void SetResources(Aws::Vector<Aws::String>&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }

    /**
     * <p>Amazon Web Services resources, identified by Amazon Resource Name (ARN),
     * which the event primarily concerns. Any number, including zero, may be
     * present.</p>
     */
    inline PipeTargetEventBridgeEventBusParameters& WithResources(const Aws::Vector<Aws::String>& value) { SetResources(value); return *this;}

    /**
     * <p>Amazon Web Services resources, identified by Amazon Resource Name (ARN),
     * which the event primarily concerns. Any number, including zero, may be
     * present.</p>
     */
    inline PipeTargetEventBridgeEventBusParameters& WithResources(Aws::Vector<Aws::String>&& value) { SetResources(std::move(value)); return *this;}

    /**
     * <p>Amazon Web Services resources, identified by Amazon Resource Name (ARN),
     * which the event primarily concerns. Any number, including zero, may be
     * present.</p>
     */
    inline PipeTargetEventBridgeEventBusParameters& AddResources(const Aws::String& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }

    /**
     * <p>Amazon Web Services resources, identified by Amazon Resource Name (ARN),
     * which the event primarily concerns. Any number, including zero, may be
     * present.</p>
     */
    inline PipeTargetEventBridgeEventBusParameters& AddResources(Aws::String&& value) { m_resourcesHasBeenSet = true; m_resources.push_back(std::move(value)); return *this; }

    /**
     * <p>Amazon Web Services resources, identified by Amazon Resource Name (ARN),
     * which the event primarily concerns. Any number, including zero, may be
     * present.</p>
     */
    inline PipeTargetEventBridgeEventBusParameters& AddResources(const char* value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }


    /**
     * <p>The source of the event.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>The source of the event.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The source of the event.</p>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The source of the event.</p>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The source of the event.</p>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p>The source of the event.</p>
     */
    inline PipeTargetEventBridgeEventBusParameters& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>The source of the event.</p>
     */
    inline PipeTargetEventBridgeEventBusParameters& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>The source of the event.</p>
     */
    inline PipeTargetEventBridgeEventBusParameters& WithSource(const char* value) { SetSource(value); return *this;}


    /**
     * <p>The time stamp of the event, per <a
     * href="https://www.rfc-editor.org/rfc/rfc3339.txt">RFC3339</a>. If no time stamp
     * is provided, the time stamp of the <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_PutEvents.html">PutEvents</a>
     * call is used.</p>
     */
    inline const Aws::String& GetTime() const{ return m_time; }

    /**
     * <p>The time stamp of the event, per <a
     * href="https://www.rfc-editor.org/rfc/rfc3339.txt">RFC3339</a>. If no time stamp
     * is provided, the time stamp of the <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_PutEvents.html">PutEvents</a>
     * call is used.</p>
     */
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }

    /**
     * <p>The time stamp of the event, per <a
     * href="https://www.rfc-editor.org/rfc/rfc3339.txt">RFC3339</a>. If no time stamp
     * is provided, the time stamp of the <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_PutEvents.html">PutEvents</a>
     * call is used.</p>
     */
    inline void SetTime(const Aws::String& value) { m_timeHasBeenSet = true; m_time = value; }

    /**
     * <p>The time stamp of the event, per <a
     * href="https://www.rfc-editor.org/rfc/rfc3339.txt">RFC3339</a>. If no time stamp
     * is provided, the time stamp of the <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_PutEvents.html">PutEvents</a>
     * call is used.</p>
     */
    inline void SetTime(Aws::String&& value) { m_timeHasBeenSet = true; m_time = std::move(value); }

    /**
     * <p>The time stamp of the event, per <a
     * href="https://www.rfc-editor.org/rfc/rfc3339.txt">RFC3339</a>. If no time stamp
     * is provided, the time stamp of the <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_PutEvents.html">PutEvents</a>
     * call is used.</p>
     */
    inline void SetTime(const char* value) { m_timeHasBeenSet = true; m_time.assign(value); }

    /**
     * <p>The time stamp of the event, per <a
     * href="https://www.rfc-editor.org/rfc/rfc3339.txt">RFC3339</a>. If no time stamp
     * is provided, the time stamp of the <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_PutEvents.html">PutEvents</a>
     * call is used.</p>
     */
    inline PipeTargetEventBridgeEventBusParameters& WithTime(const Aws::String& value) { SetTime(value); return *this;}

    /**
     * <p>The time stamp of the event, per <a
     * href="https://www.rfc-editor.org/rfc/rfc3339.txt">RFC3339</a>. If no time stamp
     * is provided, the time stamp of the <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_PutEvents.html">PutEvents</a>
     * call is used.</p>
     */
    inline PipeTargetEventBridgeEventBusParameters& WithTime(Aws::String&& value) { SetTime(std::move(value)); return *this;}

    /**
     * <p>The time stamp of the event, per <a
     * href="https://www.rfc-editor.org/rfc/rfc3339.txt">RFC3339</a>. If no time stamp
     * is provided, the time stamp of the <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_PutEvents.html">PutEvents</a>
     * call is used.</p>
     */
    inline PipeTargetEventBridgeEventBusParameters& WithTime(const char* value) { SetTime(value); return *this;}

  private:

    Aws::String m_detailType;
    bool m_detailTypeHasBeenSet = false;

    Aws::String m_endpointId;
    bool m_endpointIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_resources;
    bool m_resourcesHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_time;
    bool m_timeHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
