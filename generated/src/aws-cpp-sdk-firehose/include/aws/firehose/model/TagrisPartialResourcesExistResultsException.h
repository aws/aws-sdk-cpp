/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/firehose/model/TagrisStatus.h>
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
namespace Firehose
{
namespace Model
{

  class TagrisPartialResourcesExistResultsException
  {
  public:
    AWS_FIREHOSE_API TagrisPartialResourcesExistResultsException();
    AWS_FIREHOSE_API TagrisPartialResourcesExistResultsException(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API TagrisPartialResourcesExistResultsException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline TagrisPartialResourcesExistResultsException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline TagrisPartialResourcesExistResultsException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline TagrisPartialResourcesExistResultsException& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const Aws::Map<Aws::String, TagrisStatus>& GetResourceExistenceInformation() const{ return m_resourceExistenceInformation; }

    
    inline bool ResourceExistenceInformationHasBeenSet() const { return m_resourceExistenceInformationHasBeenSet; }

    
    inline void SetResourceExistenceInformation(const Aws::Map<Aws::String, TagrisStatus>& value) { m_resourceExistenceInformationHasBeenSet = true; m_resourceExistenceInformation = value; }

    
    inline void SetResourceExistenceInformation(Aws::Map<Aws::String, TagrisStatus>&& value) { m_resourceExistenceInformationHasBeenSet = true; m_resourceExistenceInformation = std::move(value); }

    
    inline TagrisPartialResourcesExistResultsException& WithResourceExistenceInformation(const Aws::Map<Aws::String, TagrisStatus>& value) { SetResourceExistenceInformation(value); return *this;}

    
    inline TagrisPartialResourcesExistResultsException& WithResourceExistenceInformation(Aws::Map<Aws::String, TagrisStatus>&& value) { SetResourceExistenceInformation(std::move(value)); return *this;}

    
    inline TagrisPartialResourcesExistResultsException& AddResourceExistenceInformation(const Aws::String& key, const TagrisStatus& value) { m_resourceExistenceInformationHasBeenSet = true; m_resourceExistenceInformation.emplace(key, value); return *this; }

    
    inline TagrisPartialResourcesExistResultsException& AddResourceExistenceInformation(Aws::String&& key, const TagrisStatus& value) { m_resourceExistenceInformationHasBeenSet = true; m_resourceExistenceInformation.emplace(std::move(key), value); return *this; }

    
    inline TagrisPartialResourcesExistResultsException& AddResourceExistenceInformation(const Aws::String& key, TagrisStatus&& value) { m_resourceExistenceInformationHasBeenSet = true; m_resourceExistenceInformation.emplace(key, std::move(value)); return *this; }

    
    inline TagrisPartialResourcesExistResultsException& AddResourceExistenceInformation(Aws::String&& key, TagrisStatus&& value) { m_resourceExistenceInformationHasBeenSet = true; m_resourceExistenceInformation.emplace(std::move(key), std::move(value)); return *this; }

    
    inline TagrisPartialResourcesExistResultsException& AddResourceExistenceInformation(const char* key, TagrisStatus&& value) { m_resourceExistenceInformationHasBeenSet = true; m_resourceExistenceInformation.emplace(key, std::move(value)); return *this; }

    
    inline TagrisPartialResourcesExistResultsException& AddResourceExistenceInformation(const char* key, const TagrisStatus& value) { m_resourceExistenceInformationHasBeenSet = true; m_resourceExistenceInformation.emplace(key, value); return *this; }

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Map<Aws::String, TagrisStatus> m_resourceExistenceInformation;
    bool m_resourceExistenceInformationHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
