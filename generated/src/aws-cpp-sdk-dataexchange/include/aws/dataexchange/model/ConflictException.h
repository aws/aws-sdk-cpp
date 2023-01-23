/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dataexchange/model/ResourceType.h>
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
namespace DataExchange
{
namespace Model
{

  /**
   * <p>The request couldn't be completed because it conflicted with the current
   * state of the resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/ConflictException">AWS
   * API Reference</a></p>
   */
  class ConflictException
  {
  public:
    AWS_DATAEXCHANGE_API ConflictException();
    AWS_DATAEXCHANGE_API ConflictException(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API ConflictException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The request couldn't be completed because it conflicted with the current
     * state of the resource.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The request couldn't be completed because it conflicted with the current
     * state of the resource.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The request couldn't be completed because it conflicted with the current
     * state of the resource.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The request couldn't be completed because it conflicted with the current
     * state of the resource.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The request couldn't be completed because it conflicted with the current
     * state of the resource.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The request couldn't be completed because it conflicted with the current
     * state of the resource.</p>
     */
    inline ConflictException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The request couldn't be completed because it conflicted with the current
     * state of the resource.</p>
     */
    inline ConflictException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The request couldn't be completed because it conflicted with the current
     * state of the resource.</p>
     */
    inline ConflictException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The unique identifier for the resource with the conflict.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The unique identifier for the resource with the conflict.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The unique identifier for the resource with the conflict.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The unique identifier for the resource with the conflict.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The unique identifier for the resource with the conflict.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The unique identifier for the resource with the conflict.</p>
     */
    inline ConflictException& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The unique identifier for the resource with the conflict.</p>
     */
    inline ConflictException& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the resource with the conflict.</p>
     */
    inline ConflictException& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The type of the resource with the conflict.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of the resource with the conflict.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of the resource with the conflict.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of the resource with the conflict.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of the resource with the conflict.</p>
     */
    inline ConflictException& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of the resource with the conflict.</p>
     */
    inline ConflictException& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
