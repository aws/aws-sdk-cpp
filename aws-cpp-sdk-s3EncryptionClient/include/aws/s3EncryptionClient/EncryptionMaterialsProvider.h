/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/s3EncryptionClient/s3EncryptionClient_EXPORTS.h>
#include <aws/core/Aws.h>
#include <aws/core/utils/crypto/CryptoBuf.h>

namespace Aws
{
	namespace S3EncryptionClient
	{
		class AWS_S3ENCRYPTIONCLIENT_API EncryptionMaterials
		{
		public:
			/**
			* Initialize with key, iv, and tag.
			*/
			EncryptionMaterials(const Utils::CryptoBuffer& key, const Utils::CryptoBuffer& iv, const Utils::CryptoBuffer& tag = 0);

			/**
			* Key used as master key for encryption/decryption of the content encryption key.
			*/
			inline const Utils::CryptoBuffer& getKey() const { return m_key; }

			/**
			* IV used for encryption/decryption
			*/
			inline const Utils::CryptoBuffer& getIV() const { return m_iv; }

			/**
			* Tag used for encryption/decryption for authenticated encryption mode (GCM).
			*/
			inline const Utils::CryptoBuffer& getTag() const { return m_tag; }

		private:
			Utils::CryptoBuffer m_key;
			Utils::CryptoBuffer m_iv;
			Utils::CryptoBuffer m_tag;
		};

		class AWS_S3ENCRYPTIONCLIENT_API EncryptionMaterialsProvider
		{
		public:
			/*
			* Override this method to control how encryption materials are fetched.
			*/
			virtual EncryptionMaterials fetchEncryptionMaterials() = 0;
		};
	}
}
