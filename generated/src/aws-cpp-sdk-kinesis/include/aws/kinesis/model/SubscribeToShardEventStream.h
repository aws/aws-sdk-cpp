﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/SubscribeToShardEvent.h>
#include <aws/kinesis/model/ResourceNotFoundException.h>
#include <aws/kinesis/model/ResourceInUseException.h>
#include <aws/kinesis/model/KMSDisabledException.h>
#include <aws/kinesis/model/KMSInvalidStateException.h>
#include <aws/kinesis/model/KMSAccessDeniedException.h>
#include <aws/kinesis/model/KMSNotFoundException.h>
#include <aws/kinesis/model/KMSOptInRequired.h>
#include <aws/kinesis/model/KMSThrottlingException.h>
#include <aws/kinesis/model/InternalFailureException.h>
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
namespace Kinesis
{
namespace Model
{

  /**
   * <p>This is a tagged union for all of the types of events an enhanced fan-out
   * consumer can receive over HTTP/2 after a call to
   * <a>SubscribeToShard</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/SubscribeToShardEventStream">AWS
   * API Reference</a></p>
   */
  class SubscribeToShardEventStream
  {
  public:
    AWS_KINESIS_API SubscribeToShardEventStream() = default;
    AWS_KINESIS_API SubscribeToShardEventStream(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESIS_API SubscribeToShardEventStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>After you call <a>SubscribeToShard</a>, Kinesis Data Streams sends events of
     * this type to your consumer. For an example of how to handle these events, see <a
     * href="/streams/latest/dev/building-enhanced-consumers-api.html">Enhanced Fan-Out
     * Using the Kinesis Data Streams API</a>.</p>
     */
    inline const SubscribeToShardEvent& GetSubscribeToShardEvent() const { return m_subscribeToShardEvent; }
    inline bool SubscribeToShardEventHasBeenSet() const { return m_subscribeToShardEventHasBeenSet; }
    template<typename SubscribeToShardEventT = SubscribeToShardEvent>
    void SetSubscribeToShardEvent(SubscribeToShardEventT&& value) { m_subscribeToShardEventHasBeenSet = true; m_subscribeToShardEvent = std::forward<SubscribeToShardEventT>(value); }
    template<typename SubscribeToShardEventT = SubscribeToShardEvent>
    SubscribeToShardEventStream& WithSubscribeToShardEvent(SubscribeToShardEventT&& value) { SetSubscribeToShardEvent(std::forward<SubscribeToShardEventT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResourceNotFoundException& GetResourceNotFoundException() const { return m_resourceNotFoundException; }
    inline bool ResourceNotFoundExceptionHasBeenSet() const { return m_resourceNotFoundExceptionHasBeenSet; }
    template<typename ResourceNotFoundExceptionT = ResourceNotFoundException>
    void SetResourceNotFoundException(ResourceNotFoundExceptionT&& value) { m_resourceNotFoundExceptionHasBeenSet = true; m_resourceNotFoundException = std::forward<ResourceNotFoundExceptionT>(value); }
    template<typename ResourceNotFoundExceptionT = ResourceNotFoundException>
    SubscribeToShardEventStream& WithResourceNotFoundException(ResourceNotFoundExceptionT&& value) { SetResourceNotFoundException(std::forward<ResourceNotFoundExceptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResourceInUseException& GetResourceInUseException() const { return m_resourceInUseException; }
    inline bool ResourceInUseExceptionHasBeenSet() const { return m_resourceInUseExceptionHasBeenSet; }
    template<typename ResourceInUseExceptionT = ResourceInUseException>
    void SetResourceInUseException(ResourceInUseExceptionT&& value) { m_resourceInUseExceptionHasBeenSet = true; m_resourceInUseException = std::forward<ResourceInUseExceptionT>(value); }
    template<typename ResourceInUseExceptionT = ResourceInUseException>
    SubscribeToShardEventStream& WithResourceInUseException(ResourceInUseExceptionT&& value) { SetResourceInUseException(std::forward<ResourceInUseExceptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const KMSDisabledException& GetKMSDisabledException() const { return m_kMSDisabledException; }
    inline bool KMSDisabledExceptionHasBeenSet() const { return m_kMSDisabledExceptionHasBeenSet; }
    template<typename KMSDisabledExceptionT = KMSDisabledException>
    void SetKMSDisabledException(KMSDisabledExceptionT&& value) { m_kMSDisabledExceptionHasBeenSet = true; m_kMSDisabledException = std::forward<KMSDisabledExceptionT>(value); }
    template<typename KMSDisabledExceptionT = KMSDisabledException>
    SubscribeToShardEventStream& WithKMSDisabledException(KMSDisabledExceptionT&& value) { SetKMSDisabledException(std::forward<KMSDisabledExceptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const KMSInvalidStateException& GetKMSInvalidStateException() const { return m_kMSInvalidStateException; }
    inline bool KMSInvalidStateExceptionHasBeenSet() const { return m_kMSInvalidStateExceptionHasBeenSet; }
    template<typename KMSInvalidStateExceptionT = KMSInvalidStateException>
    void SetKMSInvalidStateException(KMSInvalidStateExceptionT&& value) { m_kMSInvalidStateExceptionHasBeenSet = true; m_kMSInvalidStateException = std::forward<KMSInvalidStateExceptionT>(value); }
    template<typename KMSInvalidStateExceptionT = KMSInvalidStateException>
    SubscribeToShardEventStream& WithKMSInvalidStateException(KMSInvalidStateExceptionT&& value) { SetKMSInvalidStateException(std::forward<KMSInvalidStateExceptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const KMSAccessDeniedException& GetKMSAccessDeniedException() const { return m_kMSAccessDeniedException; }
    inline bool KMSAccessDeniedExceptionHasBeenSet() const { return m_kMSAccessDeniedExceptionHasBeenSet; }
    template<typename KMSAccessDeniedExceptionT = KMSAccessDeniedException>
    void SetKMSAccessDeniedException(KMSAccessDeniedExceptionT&& value) { m_kMSAccessDeniedExceptionHasBeenSet = true; m_kMSAccessDeniedException = std::forward<KMSAccessDeniedExceptionT>(value); }
    template<typename KMSAccessDeniedExceptionT = KMSAccessDeniedException>
    SubscribeToShardEventStream& WithKMSAccessDeniedException(KMSAccessDeniedExceptionT&& value) { SetKMSAccessDeniedException(std::forward<KMSAccessDeniedExceptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const KMSNotFoundException& GetKMSNotFoundException() const { return m_kMSNotFoundException; }
    inline bool KMSNotFoundExceptionHasBeenSet() const { return m_kMSNotFoundExceptionHasBeenSet; }
    template<typename KMSNotFoundExceptionT = KMSNotFoundException>
    void SetKMSNotFoundException(KMSNotFoundExceptionT&& value) { m_kMSNotFoundExceptionHasBeenSet = true; m_kMSNotFoundException = std::forward<KMSNotFoundExceptionT>(value); }
    template<typename KMSNotFoundExceptionT = KMSNotFoundException>
    SubscribeToShardEventStream& WithKMSNotFoundException(KMSNotFoundExceptionT&& value) { SetKMSNotFoundException(std::forward<KMSNotFoundExceptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const KMSOptInRequired& GetKMSOptInRequired() const { return m_kMSOptInRequired; }
    inline bool KMSOptInRequiredHasBeenSet() const { return m_kMSOptInRequiredHasBeenSet; }
    template<typename KMSOptInRequiredT = KMSOptInRequired>
    void SetKMSOptInRequired(KMSOptInRequiredT&& value) { m_kMSOptInRequiredHasBeenSet = true; m_kMSOptInRequired = std::forward<KMSOptInRequiredT>(value); }
    template<typename KMSOptInRequiredT = KMSOptInRequired>
    SubscribeToShardEventStream& WithKMSOptInRequired(KMSOptInRequiredT&& value) { SetKMSOptInRequired(std::forward<KMSOptInRequiredT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const KMSThrottlingException& GetKMSThrottlingException() const { return m_kMSThrottlingException; }
    inline bool KMSThrottlingExceptionHasBeenSet() const { return m_kMSThrottlingExceptionHasBeenSet; }
    template<typename KMSThrottlingExceptionT = KMSThrottlingException>
    void SetKMSThrottlingException(KMSThrottlingExceptionT&& value) { m_kMSThrottlingExceptionHasBeenSet = true; m_kMSThrottlingException = std::forward<KMSThrottlingExceptionT>(value); }
    template<typename KMSThrottlingExceptionT = KMSThrottlingException>
    SubscribeToShardEventStream& WithKMSThrottlingException(KMSThrottlingExceptionT&& value) { SetKMSThrottlingException(std::forward<KMSThrottlingExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The processing of the request failed because of an unknown error, exception,
     * or failure.</p>
     */
    inline const InternalFailureException& GetInternalFailureException() const { return m_internalFailureException; }
    inline bool InternalFailureExceptionHasBeenSet() const { return m_internalFailureExceptionHasBeenSet; }
    template<typename InternalFailureExceptionT = InternalFailureException>
    void SetInternalFailureException(InternalFailureExceptionT&& value) { m_internalFailureExceptionHasBeenSet = true; m_internalFailureException = std::forward<InternalFailureExceptionT>(value); }
    template<typename InternalFailureExceptionT = InternalFailureException>
    SubscribeToShardEventStream& WithInternalFailureException(InternalFailureExceptionT&& value) { SetInternalFailureException(std::forward<InternalFailureExceptionT>(value)); return *this;}
    ///@}
  private:

    SubscribeToShardEvent m_subscribeToShardEvent;
    bool m_subscribeToShardEventHasBeenSet = false;

    ResourceNotFoundException m_resourceNotFoundException;
    bool m_resourceNotFoundExceptionHasBeenSet = false;

    ResourceInUseException m_resourceInUseException;
    bool m_resourceInUseExceptionHasBeenSet = false;

    KMSDisabledException m_kMSDisabledException;
    bool m_kMSDisabledExceptionHasBeenSet = false;

    KMSInvalidStateException m_kMSInvalidStateException;
    bool m_kMSInvalidStateExceptionHasBeenSet = false;

    KMSAccessDeniedException m_kMSAccessDeniedException;
    bool m_kMSAccessDeniedExceptionHasBeenSet = false;

    KMSNotFoundException m_kMSNotFoundException;
    bool m_kMSNotFoundExceptionHasBeenSet = false;

    KMSOptInRequired m_kMSOptInRequired;
    bool m_kMSOptInRequiredHasBeenSet = false;

    KMSThrottlingException m_kMSThrottlingException;
    bool m_kMSThrottlingExceptionHasBeenSet = false;

    InternalFailureException m_internalFailureException;
    bool m_internalFailureExceptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
