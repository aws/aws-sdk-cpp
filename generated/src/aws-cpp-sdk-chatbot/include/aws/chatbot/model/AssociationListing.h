/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
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
namespace chatbot
{
namespace Model
{

  /**
   * <p>A listing of an association with a channel configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/AssociationListing">AWS
   * API Reference</a></p>
   */
  class AssociationListing
  {
  public:
    AWS_CHATBOT_API AssociationListing();
    AWS_CHATBOT_API AssociationListing(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHATBOT_API AssociationListing& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHATBOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource (for example, a custom
     * action).</p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }
    inline AssociationListing& WithResource(const Aws::String& value) { SetResource(value); return *this;}
    inline AssociationListing& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}
    inline AssociationListing& WithResource(const char* value) { SetResource(value); return *this;}
    ///@}
  private:

    Aws::String m_resource;
    bool m_resourceHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
